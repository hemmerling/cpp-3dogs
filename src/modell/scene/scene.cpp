#include "scene.h"

Scene::Scene(Static &aStatic){
  init(aStatic);
}

Scene::~Scene(void){}

void Scene::chessboard(ZQueue *aQueue, int aSize)
{
   ZPush *aPush = new ZPush;
   ZPop *aPop = new ZPop;

   MQuadratW *aDummy = new MQuadratW;
   GLdouble aLength = aDummy->getLength();    

   aQueue->push_back(aPush);

   ZTranslation *aSchachBewegung = new ZTranslation;
   aSchachBewegung->setCoordinates(
           *(new Coordinates( - aLength * aSize / 2.0 , 
                              - aLength * aSize / 2.0, 0.0 )));    
   aQueue->push_back(aSchachBewegung);
   
   for ( int LaufVariable1 = 0; LaufVariable1 < aSize; LaufVariable1++ )
    {
         aQueue->push_back(aPush);
         for ( int LaufVariable2 = 0; LaufVariable2 < aSize; LaufVariable2++ )
          {
             if ( ( ( LaufVariable2 + LaufVariable1 ) & 1 ) == 0 )
              { // weisses Feld
                MQuadratW *aWeiss = new MQuadratW;
                aQueue->push_back(aWeiss);
              }
             else
              { // schwarzes Feld
                MQuadratS *aSchwarz = new MQuadratS;
                aQueue->push_back(aSchwarz);
              };
             // Bewegung zum naechsten Feld
             ZTranslation *aSchachBewegung = new ZTranslation;
             aSchachBewegung->setCoordinates(
                       *(new Coordinates( aLength, 0.0, 0.0 )));    
             aQueue->push_back(aSchachBewegung);
           };

         aQueue->push_back(aPop);

         ZTranslation *aSchachBewegung = new ZTranslation;
         aSchachBewegung->setCoordinates(
             *(new Coordinates( 0.0, aLength, 0.0 )));    
         aQueue->push_back(aSchachBewegung);
    };
   aQueue->push_back(aPop);
}


void Scene::init(Static &aStatic)
{
    GLfloat aAbstand = -1.0;
    
    // Zeitbasis setzen
    aStatic.setTimePeriod(TIME_PERIOD);  
    
    // Push
    ZPush *aPush = new ZPush;
    // Pop
    ZPop *aPop = new ZPop;

    // Quadric, z.B.q fuer Radachsen
    WQuadric *aQuadric1 = new WQuadric();

    // Texturen
    WTexture *aWTexture = new WTexture();
        
    // Uebung 2       
    // Schachbrett
    // DisplayListen anlegen und ID ablegen
    /**************************************************************/
    /* Darstellungsreihenfolge in der DisplayListe festlegen      */
    /**************************************************************/
    chessboard(aStatic.getDisplayListQueue(),45);    
    ZDisplayList *aZDisplayList = new ZDisplayList;
    aZDisplayList->setQueue(aStatic.getDisplayListQueue());
    aZDisplayList->store(aStatic.aOpenGL);

    // Uebung 2       
    // Betrachterposition und Perspektive
    WLookAt *aWLookAt = new WLookAt;
    aWLookAt->setEye(aStatic.getEye());
    aWLookAt->setCenter(aStatic.getCenter());
    aWLookAt->setUp(aStatic.getUp());
    aWLookAt->setPeriod( 2 * PI * 5); // in RAD ( 2*PI (RAD) = 360 Grad (DEG) )
    aWLookAt->setStep(0.5);

    // Veraendern der Kappungsgrenze
    WPerspective *aWPerspective = new WPerspective;
    // Automatisches Veraendern der Kappungsgrenze, gemaess Algorithmus
    // aWPerspective->setPeriod( 120.0 / ( 2 * PI ) ); // in RAD ( 2*PI (RAD) = 360 Grad (DEG) )
    // Achtung, setPeriod(0.0) = Veraendern der Kappungsgrenze durch den Benutzer
    aWPerspective->setFieldOfViewAngle(65.0); // 65.0
    aWPerspective->setAspectRatio(1.0);
    aWPerspective->setFarDistance(50.0); // 50.0
    aWPerspective->setNearDistance(4.0); // 4.0

    // Szene Kippen
    MSzeneKippen *aSzeneKippen = new MSzeneKippen;
    aSzeneKippen->setStep(10.0);

    // Achsenkreuz
    ZGraticule *aZGraticule2 = new ZGraticule;
    aZGraticule2->setLength(1.5);
    aZGraticule2->setLineWidth(1.5);

    // Beleuchtung im Ursprung
    ZLighting *aBeleuchtung = new ZLighting;
    aBeleuchtung->setNumber(0);

    // Beleuchtung "woanders"
    ZLighting *aBeleuchtungWoanders = new ZLighting;
    aBeleuchtungWoanders->setNumber(3);
    
    #ifdef TEST
    // aBeleuchtung->setLightPosition(*(new LPosition<GLfloat>( 0.0, 0.0, 1.0, 0.0 ) ) );
    aBeleuchtung->setLightPosition( new Coordinates( 0.0, 0.0, 0.0), 1.0);    
    aBeleuchtung->setSpotlightDirection(*(new Coordinates( 0.0, 0.0, -1.0)));
    aBeleuchtung->setSpotlightExponent(1.0);
    aBeleuchtung->setSpotlightCutoffAngle(45.0);
    aBeleuchtung->setViewDirectionZ(false);
    aBeleuchtung->setLightRGBA(*(new Light<GLfloat>( 0.2, 0.2, 0.2, 1.0 )));
    aBeleuchtung->setAmbientRGBA(*(new Light<GLfloat>( 0.0, 0.0, 0.0, 1.0 )));
    aBeleuchtung->setDiffuseRGBA(*(new Light<GLfloat>( 1.0, 1.0, 1.0, 1.0 )));
    aBeleuchtung->setSpecularRGBA(*(new Light<GLfloat>( 1.0, 1.0, 1.0, 1.0 )));
    #endif

    // Fahrzeug-Beleuchtung
    ZLighting *aLichtVorneRechts = new ZLighting;
    aLichtVorneRechts->setSpotlightCutoffAngle(30.0);
    aLichtVorneRechts->setNumber(2);
    aLichtVorneRechts->setLightRGBA(*(new Light<GLfloat>( 0.4, 0.2, 0.2, 1.0 )));

    // Kugel im Ursprung
    YSphere *aKugelImUrsprung = new YSphere;
    aKugelImUrsprung->setID(ID_KUGELIMURSPRUNG); 
    aKugelImUrsprung->setOuterRadius(0.3); // 0.1
    aKugelImUrsprung->setLighting(false); 
    aKugelImUrsprung->getColor().setR(1.0);
    aKugelImUrsprung->getColor().setG(1.0);
    aKugelImUrsprung->getColor().setB(1.0);
    // Translation fuer Kugel im Ursprung
    MTranslation1 *aTo_KugelImUrsprung_Translation = new MTranslation1;
    // Translation fuer zweite Instanz der Kugel "woanders"
    MTranslation1 *aTo_KugelWoanders_Translation = new MTranslation1;

    // Bewegung der Kugel im Ursprung
    aTo_KugelImUrsprung_Translation->setCoordinates(
                      *(new Coordinates( 0.0, 0.0, 0.0 ) ) );    
    aTo_KugelImUrsprung_Translation->setStep(0.25);

    // Bewegung der Kugel "woanders"
    aTo_KugelWoanders_Translation->setCoordinates(
                      *(new Coordinates( 0.0, 0.0, 0.0 ) ) );    
    aTo_KugelWoanders_Translation->setStep(0.25);

    // Schachbrett
    MQuadratS *aMQuadratS = new MQuadratS;
    aMQuadratS->setID(ID_MYSCHWARZESQUADRAT);  
    ZRectangle *aZRectangle = new ZRectangle;

    // Achsenkreuz
    ZGraticule *aZGraticule1 = new ZGraticule;
    aZGraticule1->setLength(10);
    aZGraticule1->setLineWidth(1.5);

    // Auto-Rad
    YTorus *aRad1 = new YTorus;
   	aRad1->setInnerRadius(0.4);
  	aRad1->setOuterRadius(0.6);
  	aRad1->setSides(17);
    aRad1->setRings(17);
    aRad1->getColor ().setR(1.0);
    aRad1->getColor().setG(120.0/255.0);
    aRad1->getColor().setB(0.0);

    // "transparenter" Auto-Scheinwerfer
    YCone *aScheinwerferVorneRechts = new YCone;
    aScheinwerferVorneRechts->getColor().setR(1.0);
    aScheinwerferVorneRechts->getColor().setG(0.2);
    aScheinwerferVorneRechts->getColor().setB(1.0);
 	aScheinwerferVorneRechts->setBase(0.5);					
 	aScheinwerferVorneRechts->setHeight(1.0);					
 	aScheinwerferVorneRechts->setTransparenz(true);					

    // leuchtende, weil "ohne Lichtberechnung" dargestellte
    // Auto-Scheinwerfer-Leuchte
    YSphere *aScheinwerferLeuchte = new YSphere;
    aScheinwerferLeuchte->setOuterRadius(0.1);
    aScheinwerferLeuchte->setLighting(false); 
    aScheinwerferLeuchte->getColor().setR(1.0);
    aScheinwerferLeuchte->getColor().setG(1.0);
    aScheinwerferLeuchte->getColor().setB(0.0);
  
    // Kugel als LenkungsGelenk
    YSphere *aLenkungsGelenk = new YSphere;
    aLenkungsGelenk->setOuterRadius(0.5);
    aLenkungsGelenk->getColor().setR(1.0);
    aLenkungsGelenk->getColor().setG(1.0);
    aLenkungsGelenk->getColor().setB(1.0);
    
    // Auto-Achse 
    WCylinder *aRadAchse1 = new WCylinder;
   	aRadAchse1->setQuadric(aQuadric1);
   	aRadAchse1->setBase(0.2);
  	aRadAchse1->setTop(0.2);
  	aRadAchse1->setHeight(5.0);
  	aRadAchse1->setSlices(10);
  	aRadAchse1->setStacks(10);
    aRadAchse1->getColor().setR(0.0);
    aRadAchse1->getColor().setG(1.0);
    aRadAchse1->getColor().setB(0.0);
 
    // Auto-Karosserie
    ZCuboid *aKarosserie = new ZCuboid;
    aKarosserie->setHeight(1.0);    
    aKarosserie->setLength(4.0);    
    aKarosserie->setWidth(2.0);    
    aKarosserie->getColor().setR(1.0);
    aKarosserie->getColor().setG(1.0);
    aKarosserie->getColor().setB(1.0);
    aKarosserie->setTextureDisplay(true);
    aKarosserie->setTexture(aWTexture);
    aKarosserie->setTextureName(1);

    // Auto-Fenster
    ZCuboid *aAutoFenster = new ZCuboid;
    aAutoFenster->setHeight(0.6);    
    aAutoFenster->setLength(aKarosserie->getLength()*2.0/3.0);    
    aAutoFenster->setWidth(aKarosserie->getWidth());    
    aAutoFenster->getColor().setR(1.0);
    aAutoFenster->getColor().setG(1.0);
    aAutoFenster->getColor().setB(1.0);
 	aAutoFenster->setTransparenz(true);					

    // Auto-Dach
    ZCuboid *aAutoDach = new ZCuboid;
    aAutoDach->setHeight(0.1);    
    aAutoDach->setLength(aAutoFenster->getLength());    
    aAutoDach->setWidth(aAutoFenster->getWidth());    
    aAutoDach->getColor().setR(1.0);
    aAutoDach->getColor().setG(1.0);
    aAutoDach->getColor().setB(1.0);
    aAutoDach->setTextureDisplay(true);
    aAutoDach->setTexture(aWTexture);
    aAutoDach->setTextureName(1);

    // FahrerKopf im Fahrzeug, weisse Grundfarbe, "ohne Lichtberechnung"
    WSphere *aFahrerKopf = new WSphere;
   	aFahrerKopf->setQuadric(aQuadric1);
    aFahrerKopf->setOuterRadius(0.3);
    aFahrerKopf->setDefaultOuterRadius(0.3);
	aFahrerKopf->setSides(17);
    aFahrerKopf->setRings(17);
    aFahrerKopf->getColor().setR(1.0);
    aFahrerKopf->getColor().setG(1.0);
    aFahrerKopf->getColor().setB(1.0);
    aFahrerKopf->setLighting(false); 
    aFahrerKopf->setTextureDisplay(true);
    aFahrerKopf->setTexture(aWTexture);
    aFahrerKopf->setTextureName(0);
    aFahrerKopf->setName("FahrerKopf mit Textur");

    // FahrerKoerper im Fahrzeug
    ZCuboid *aFahrerKoerper = new ZCuboid;
    aFahrerKoerper->setHeight(1.0);    
    aFahrerKoerper->setDefaultHeight(1.0);    
    aFahrerKoerper->setLength(0.6);    
    aFahrerKoerper->setDefaultLength(0.6);    
    aFahrerKoerper->setWidth(0.6);    
    aFahrerKoerper->setDefaultWidth(0.6);    
    aFahrerKoerper->getColor().setR(1.0);
    aFahrerKoerper->getColor().setG(0.0);
    aFahrerKoerper->getColor().setB(0.0);

    // Innenbeleuchtung im Auto
    ZLighting *aAutoInnenBeleuchtung = new ZLighting;
    aAutoInnenBeleuchtung->setSpotlightDirection(*(new Coordinates( 1.0, 1.0, -2.0)));
    aAutoInnenBeleuchtung->setSpotlightCutoffAngle(30.0);
    aAutoInnenBeleuchtung->setNumber(1);
    
    // violetter Dodec
    YDodec *aDodeca = new YDodec;
    aDodeca->getColor().setR(100.0/255.0); 
    aDodeca->getColor().setG(0.0);
    aDodeca->getColor().setB(100.0/255.0);
    ZTranslation *aTo_Dodeca_Translation = new ZTranslation;
    aTo_Dodeca_Translation->setCoordinates(
                      *(new Coordinates( 10.0, 10.0, 0.0 ) ) );    

    // dunkelgelber Icos
    YIcos *aIcosa = new YIcos;
    aIcosa->getColor().setR(150.0/255.0); 
    aIcosa->getColor().setG(150.0/255.0);
    aIcosa->getColor().setB(0.0);
    ZTranslation *aTo_Icosa_Translation = new ZTranslation;
    aTo_Icosa_Translation->setCoordinates(
                      *(new Coordinates( 10.0, -10.0, 0.0 ) ) );    

    // gruener Oct
    YOct *aOcta = new YOct;
    aOcta->getColor().setR(0.0);
    aOcta->getColor().setG(1.0);
    aOcta->getColor().setB(0.0);
    ZTranslation *aTo_Octa_Translation = new ZTranslation;
    aTo_Octa_Translation->setCoordinates(
                      *(new Coordinates( -10.0, 10.0, 0.0 ) ) );    

    // blauer Tetr
    YTetr *aTetra = new YTetr;
    aTetra->getColor().setR(0.0);
    aTetra->getColor().setG(0.0);
    aTetra->getColor().setB(1.0);
    ZTranslation *aTo_Tetra_Translation = new ZTranslation;
    aTo_Tetra_Translation->setCoordinates(
                      *(new Coordinates( -10.0, -10.0, 0.0 ) ) );    

    // oranger Pot
    YPot *aPot = new YPot;
    aPot->setSize(1.0);
    aPot->getColor().setR(100.0/255.0); 
    aPot->getColor().setG(50.0/255.0);
    aPot->getColor().setB(0.0);
    ZTranslation *aTo_Pot_Translation = new ZTranslation;
    aTo_Pot_Translation->setCoordinates(
                      *(new Coordinates( 5.0, 5.0, 0.0 ) ) );    

    MRotation1 *aPotRotation = new MRotation1();
    aPotRotation->setCoordinates(*(new Coordinates( 1.0, 0.0, 0.0 )));    
    aPotRotation->setAngle(*new GLfloat(90.0)); 

    //  Auto-Darstellung
    ZTranslation *aTo_Auto_Translation = new ZTranslation;
    aTo_Auto_Translation->setCoordinates(
                      *(new Coordinates( +aAbstand, +aAbstand, 0.0 ) ) );    

    //  Zum Lenkgelenk und der Vorderachse
    ZTranslation *aTo_LenkungsGelenk_Translation = new ZTranslation;
    aTo_LenkungsGelenk_Translation->setCoordinates(
                      *(new Coordinates( 0.0, 0.0, 
                         aRad1->getOuterRadius() + 
   	                   ( aRad1->getOuterRadius() - 
   	                     aRad1->getInnerRadius() ) / 2.0  ) ) );    

    // RadAchse gemaess LenkungsAusschlag einschlagen
    MRotation1 *aRadAchse1_LenkungsAusschlag = new MRotation1();
    aRadAchse1_LenkungsAusschlag->setCoordinates(*(new Coordinates( 0.0, 0.0, 1.0 )));    
    aRadAchse1_LenkungsAusschlag->setAngle(*new GLfloat(20.0)); 
    aRadAchse1_LenkungsAusschlag->setStep(*new GLfloat(10.0)); 

    // Bewegung der Vorderachse
    MTranslation2 *aVorderachseBewegung = new MTranslation2(aRadAchse1_LenkungsAusschlag); 
    aVorderachseBewegung->setCoordinates(
                      *(new Coordinates( 0.0, 0.0, 0.0 ) ) );    
    aVorderachseBewegung->setStep(0.5);

    // Von der Vorderachse zur Karosserie
    ZTranslation *aTo_Karosserie_Translation = new ZTranslation;
    aTo_Karosserie_Translation->setCoordinates(
                      *(new Coordinates( 0.0, 0.0, aKarosserie->getHeight() ) ) );    

    // Von der Karosserie zum AutoFenster
    ZTranslation *aTo_AutoFenster_Translation = new ZTranslation;
    aTo_AutoFenster_Translation->setCoordinates(
                      *(new Coordinates( aKarosserie->getLength()/6.0, 0.0, 
                      aKarosserie->getHeight()/2.0 
                      + aAutoFenster->getHeight()/2.0 ) ) );    

    // Vom AutoFenster zum FahrerKoerper
    ZTranslation *aTo_FahrerKoerper_Translation = new ZTranslation;
    aTo_FahrerKoerper_Translation->setCoordinates(
                      *(new Coordinates( 0.0 , 0.0, 0.0 ) ) );    

    // Vom FahrerKoerper zum FahrerKopf
    ZTranslation *aTo_FahrerKopf_Translation = new ZTranslation;
    aTo_FahrerKopf_Translation->setCoordinates(
                      *(new Coordinates( 0.0 , 0.0, aFahrerKoerper->getHeight()/2.0 + aFahrerKopf->getOuterRadius() ) ) );    

    // Rotation des FahrerKopfes
    MRotation1 *aFahrerKopfRotation = new MRotation1();
    aFahrerKopfRotation->setCoordinates(*(new Coordinates( 0.0, 0.0, 1.0 )));    
    aFahrerKopfRotation->setAngle(*new GLfloat(180.0)); 

    // Vom Autofenster zum AutoDach
    ZTranslation *aTo_AutoDach_Translation = new ZTranslation;
    aTo_AutoDach_Translation->setCoordinates(
                      *(new Coordinates( 0.0, 0.0, aAutoFenster->getHeight()/2.0 +  aAutoDach->getHeight() ) ) );    

    //  Zum Scheinwerfer VorneRechts
    ZTranslation *aTo_ScheinwerferVorneRechts_Translation = new ZTranslation;
    aTo_ScheinwerferVorneRechts_Translation->setCoordinates(
                      *(new Coordinates( - aRadAchse1->getHeight()/4.0,  - aRadAchse1->getHeight()/4.0, 
                      aRadAchse1->getHeight()/8.0 ) ) );    

    // Scheinwerfer VorneRechts in Position drehen
    MRotation1 *aScheinwerferVorneRechts_Rotation = new MRotation1();
    aScheinwerferVorneRechts_Rotation->setCoordinates(*(new Coordinates( 0.0, 1.0, 0.0 )));    
    aScheinwerferVorneRechts_Rotation->setAngle(*new GLfloat(90.0)); 

    //  Zum Licht VorneRechts, in der Kegelspitze
    ZTranslation *aTo_LichtVorneRechts_Translation = new ZTranslation;
    aTo_LichtVorneRechts_Translation->setCoordinates(
                      *(new Coordinates( 0.0, 0.0, 
                        aScheinwerferVorneRechts->getHeight() - 
                        3 * aScheinwerferLeuchte->getOuterRadius() ) ) );    

    // Licht VorneRechts in Position drehen
    MRotation1 *aLichtVorneRechts_Rotation = new MRotation1();
    aLichtVorneRechts_Rotation->setCoordinates(*(new Coordinates( 1.0, 0.0, 0.0 )));    
    aLichtVorneRechts_Rotation->setAngle(*new GLfloat(0.0)); 

    //  Zum 1.Rad
    ZTranslation *aTo_Rad1_Translation = new ZTranslation;
    aTo_Rad1_Translation->setCoordinates(
                      *(new Coordinates( 0.0, - aRadAchse1->getHeight()/2 + aRad1->getOuterRadius() , 0.0 ) ) );    

    // 1.Rad in Position drehen
    MRotation1 *aRad1_Rotation = new MRotation1();
    aRad1_Rotation->setCoordinates(*(new Coordinates( 1.0, 0.0, 0.0 )));    
    aRad1_Rotation->setAngle(*new GLfloat(-90.0)); 

    // Radachse ragt etwas über Rad hinaus
    ZTranslation *aTo_Radachse1_Translation = new ZTranslation;
    aTo_Radachse1_Translation->setCoordinates(
                      *(new Coordinates( 0.0, 0.0, - aRad1->getOuterRadius() ) ) );    

    // Entlang der vorderen Radachse, Radachse ragt etwas über Rad hinaus
    ZTranslation *aTo_Rad2_Translation = new ZTranslation;
    aTo_Rad2_Translation->setCoordinates(
                      *(new Coordinates( 0.0, 0.0, aRadAchse1->getHeight() - aRad1->getOuterRadius() ) ) );    

    // Von der Vorderachse zur Hinterachse 
    ZTranslation *aTo_Hinterachse_Translation = new ZTranslation;
    aTo_Hinterachse_Translation->setCoordinates(
                      *(new Coordinates( 5.0, 0.0, 0.0 ) ) );    
    // Radbewegung
    MRotation1 *aRadBewegung1 = new MRotation1();
    aRadBewegung1->setCoordinates(*(new Coordinates( 0.0, 0.0, 1.0 )));    
    aRadBewegung1->setStep(0.5);

    // Rotation
    MRotation1 *aAlleObjekte_Rotation = new MRotation1();
    aAlleObjekte_Rotation->setCoordinates(*(new Coordinates( 0.0, 0.0, 1.0 )));    
    aAlleObjekte_Rotation->setStep(2.0);

    // Szenen-Veraenderung: 
    // Gleichartige Drehung von mehreren Objekten
    ZEvent *aVeraenderung1 = new ZEvent;

    MRotX1 *aRadBewegungStartStop = new MRotX1(aRadBewegung1);
    MRotX1 *aAlleObjekte_Veraendern = new MRotX1(aAlleObjekte_Rotation);

    // Wahl des Blickpunkts
    MLookX0 *aBewegung0 = new MLookX0(aWLookAt);
    MLookX1 *aBewegung1 = new MLookX1(aWLookAt);
    MLookX2 *aBewegung2 = new MLookX2(aWLookAt);
    MLookX3 *aBewegung3 = new MLookX3(aWLookAt);

    // Koordination der Bewegung des Autos
    MTransX1 *aAutoBewegungStop = new MTransX1(aVorderachseBewegung);
    MTransX2 *aAutoBewegungVor = new MTransX2(aVorderachseBewegung);
    MTransX3 *aAutoBewegungZurueck = new MTransX3(aVorderachseBewegung);

    MRotX3 *aAutoBewegungLinks = new MRotX3(aRadAchse1_LenkungsAusschlag);
    MRotX4 *aAutoBewegungRechts = new MRotX4(aRadAchse1_LenkungsAusschlag);

    MTransX4 *aAutoGeschwindigkeitsErhoeheung = new MTransX4(aVorderachseBewegung);
    aAutoGeschwindigkeitsErhoeheung->setStep(0.1);
    MTransX5 *aAutoGeschwindigkeitsVerringerung = new MTransX5(aVorderachseBewegung);
    aAutoGeschwindigkeitsVerringerung->setStep(0.1);

    // Richtige Scheinwerfer-Farbe darstellen
    MFarbe1 *aFarbVeraenderung1 = new MFarbe1(aScheinwerferLeuchte);
    
    // Morphing des FahrerKoerpers und des FahrerKopfes
    MMorphX1 *aFahrerKoerperAenderung1 = new MMorphX1(aFahrerKoerper, aFahrerKopf);
    aFahrerKoerperAenderung1->setPeriod( 2 * PI * 5); // in RAD ( 2*PI (RAD) = 360 Grad (DEG) )
    aFahrerKoerperAenderung1->setStep(2.0);
 
    aVeraenderung1->push_back(aRadBewegungStartStop);   
    aVeraenderung1->push_back(aFarbVeraenderung1);
    aVeraenderung1->push_back(aFahrerKoerperAenderung1);
    aVeraenderung1->push_back(aVorderachseBewegung);   
    aVeraenderung1->push_back(aWLookAt);      
    aVeraenderung1->push_back(aWPerspective);      
    aVeraenderung1->push_back(aAlleObjekte_Veraendern);      

    //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    
    // Eingaben der Callback-Routinen anmelden
    ZInput *aZInput;
    aZInput = aStatic.getZInput();
    
    // aZInput->addToKeyboardTable(aSimulationAnhalten, ' ');
    aZInput->addToKeyboardTable(aRadBewegungStartStop, ' ');

    aZInput->addToKeyboardTable(aAutoGeschwindigkeitsErhoeheung, '+');
    aZInput->addToKeyboardTable(aAutoGeschwindigkeitsVerringerung, '-');

    aZInput->addToSpecialTable(aAutoBewegungStop, GLUT_KEY_END);
    aZInput->addToSpecialTable(aAutoBewegungVor, GLUT_KEY_UP);
    aZInput->addToSpecialTable(aAutoBewegungZurueck, GLUT_KEY_DOWN);
    aZInput->addToSpecialTable(aAutoBewegungLinks, GLUT_KEY_LEFT);
    aZInput->addToSpecialTable(aAutoBewegungRechts, GLUT_KEY_RIGHT);

    aZInput->addToSpecialTable(aBewegung0,GLUT_KEY_F9);
    aZInput->addToSpecialTable(aBewegung1,GLUT_KEY_F10);
    aZInput->addToSpecialTable(aBewegung2,GLUT_KEY_F11);
    aZInput->addToSpecialTable(aBewegung3,GLUT_KEY_F12);
    
    // aZInput->addToJoystickTable(aAutoBewegungVor, aJoystickInputMaske);
    // aZInput->addToMouseTable(aAutoBewegungVor, aMouseInputMaske);

    aZInput->addToKeyboardTable(new MHoeherZ(aTo_KugelImUrsprung_Translation), '*');
    aZInput->addToKeyboardTable(new MTieferZ(aTo_KugelImUrsprung_Translation), '/');
    aZInput->addToKeyboardTable(new MUrsprungZ(aTo_KugelImUrsprung_Translation), 'u');

    aZInput->addToSpecialTable(new MHoeherZ(aTo_KugelWoanders_Translation), GLUT_KEY_F5);
    aZInput->addToSpecialTable(new MTieferZ(aTo_KugelWoanders_Translation), GLUT_KEY_F6);
    aZInput->addToSpecialTable(new MUrsprungZ(aTo_KugelWoanders_Translation), GLUT_KEY_F7);
   
     aZInput->addToKeyboardTable(aFarbVeraenderung1, 'l');
    
    // aZInput->addToKeyboardTable(aFarbVeraenderung1, 'k');
    aZInput->addToKeyboardTable(aSzeneKippen, 'k');

    /**************************************************************/
    /* Einmalig Quadrics definieren, einmalig Texturen laden      */
    /**************************************************************/
    aStatic.getQueue2()->push_back(aQuadric1);
    aStatic.getQueue2()->push_back(aWTexture);

    /**************************************************************/
    /* Szene veraendern                                           */
    /**************************************************************/
    aStatic.getQueue2()->push_back(aVeraenderung1);
       
    /**************************************************************/
    /* Darstellungsreihenfolge festlegen                          */
    /**************************************************************/
    // Szene ( Begin )
    aStatic.getQueue2()->push_back(aPush);   

    aStatic.getQueue2()->push_back(aWLookAt); 
    aStatic.getQueue2()->push_back(aWPerspective);     
    aStatic.getQueue2()->push_back(aZDisplayList); 
    aStatic.getQueue2()->push_back(aSzeneKippen);   

    // Beleuchtung ( Begin )
    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aTo_KugelImUrsprung_Translation);
    aStatic.getQueue2()->push_back(aKugelImUrsprung);
    aStatic.getQueue2()->push_back(aBeleuchtung);
    aStatic.getQueue2()->push_back(aZGraticule2);    
    // Beleuchtung ( Ende )
    aStatic.getQueue2()->push_back(aPop);   

    aStatic.getQueue2()->push_back(aZGraticule1);   

    // Sonstige Objekte
    
    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aTo_Dodeca_Translation);
    aStatic.getQueue2()->push_back(aAlleObjekte_Rotation);
    aStatic.getQueue2()->push_back(aDodeca);

    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aTo_KugelWoanders_Translation);
    aStatic.getQueue2()->push_back(aKugelImUrsprung);
    aStatic.getQueue2()->push_back(aBeleuchtungWoanders);
    aStatic.getQueue2()->push_back(aPop);   

    aStatic.getQueue2()->push_back(aZGraticule2);    
    aStatic.getQueue2()->push_back(aPop);   

    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aTo_Icosa_Translation);
    aStatic.getQueue2()->push_back(aAlleObjekte_Rotation);
    aStatic.getQueue2()->push_back(aIcosa);
    aStatic.getQueue2()->push_back(aZGraticule2);    
    aStatic.getQueue2()->push_back(aPop);   

    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aTo_Octa_Translation);
    aStatic.getQueue2()->push_back(aAlleObjekte_Rotation);
    aStatic.getQueue2()->push_back(aOcta);
    aStatic.getQueue2()->push_back(aZGraticule2);    
    aStatic.getQueue2()->push_back(aPop);   

    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aTo_Tetra_Translation);
    aStatic.getQueue2()->push_back(aZGraticule2);    
    aStatic.getQueue2()->push_back(aAlleObjekte_Rotation);
    aStatic.getQueue2()->push_back(aTetra);
    // aStatic.getQueue2()->push_back(aRotation3);
    aStatic.getQueue2()->push_back(aZGraticule2);    
    aStatic.getQueue2()->push_back(aPop);   

    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aTo_Pot_Translation);
    aStatic.getQueue2()->push_back(aAlleObjekte_Rotation);
    aStatic.getQueue2()->push_back(aPotRotation);
    aStatic.getQueue2()->push_back(aPot);
    aStatic.getQueue2()->push_back(aZGraticule2);    
    aStatic.getQueue2()->push_back(aPop);   


    // Auto ( Begin )
    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aTo_Auto_Translation);

    // **************
    // Vorderachse mit 2 Raedern ( Begin )
    aStatic.getQueue2()->push_back(aPush);   

    // Vorderachsen-Lenkung
    aStatic.getQueue2()->push_back(aTo_LenkungsGelenk_Translation);

    // Vorwaerts- oder Rueckwaertsbewegung ausfuehrem
    aStatic.getQueue2()->push_back(aVorderachseBewegung);  
    // Stellung der Vorderachse
    aStatic.getQueue2()->push_back(aRadAchse1_LenkungsAusschlag);     
    // Lenkungsgelenk
    aStatic.getQueue2()->push_back(aLenkungsGelenk);
    // aStatic.getQueue2()->push_back(aZGraticule1);   
// #ifdef TEST
    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aTo_Karosserie_Translation);
    aStatic.getQueue2()->push_back(aZGraticule1);   
    aStatic.getQueue2()->push_back(aKarosserie);
    aStatic.getQueue2()->push_back(aTo_AutoFenster_Translation);

    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aTo_FahrerKoerper_Translation);
    aStatic.getQueue2()->push_back(aFahrerKoerper);
    aStatic.getQueue2()->push_back(aTo_FahrerKopf_Translation);
    aStatic.getQueue2()->push_back(aFahrerKopfRotation);
    aStatic.getQueue2()->push_back(aAlleObjekte_Rotation);
    aStatic.getQueue2()->push_back(aFahrerKopf);
    aStatic.getQueue2()->push_back(aAutoInnenBeleuchtung);
    aStatic.getQueue2()->push_back(aZGraticule2);    
    aStatic.getQueue2()->push_back(aPop);   

    aStatic.getQueue2()->push_back(aAutoFenster);

    aStatic.getQueue2()->push_back(aTo_AutoDach_Translation);
    aStatic.getQueue2()->push_back(aAutoDach);

    aStatic.getQueue2()->push_back(aPop);   
// #endif

    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aTo_ScheinwerferVorneRechts_Translation);
    // aStatic.getQueue2()->push_back(aZGraticule1);   
    aStatic.getQueue2()->push_back(aScheinwerferVorneRechts_Rotation);
    // aStatic.getQueue2()->push_back(aZGraticule1);   
    aStatic.getQueue2()->push_back(aScheinwerferVorneRechts);
    aStatic.getQueue2()->push_back(aTo_LichtVorneRechts_Translation);
    aStatic.getQueue2()->push_back(aLichtVorneRechts_Rotation);
    //aStatic.getQueue2()->push_back(aZGraticule1);   
    aStatic.getQueue2()->push_back(aScheinwerferLeuchte);
    aStatic.getQueue2()->push_back(aLichtVorneRechts);
    aStatic.getQueue2()->push_back(aPop);   

    // Linkes Vorderrad
    aStatic.getQueue2()->push_back(aTo_Rad1_Translation);

    aStatic.getQueue2()->push_back(aRad1_Rotation);

    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aRadBewegung1);
    aStatic.getQueue2()->push_back(aRad1);
    aStatic.getQueue2()->push_back(aPop);   

    // Vordere Radachse 
    
    aStatic.getQueue2()->push_back(aTo_Radachse1_Translation);
    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aRadBewegung1);
    aStatic.getQueue2()->push_back(aRadAchse1);
    aStatic.getQueue2()->push_back(aPop);   
    aStatic.getQueue2()->push_back(aTo_Rad2_Translation);

    // Rechtes Vorderrad
    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aRadBewegung1);
    aStatic.getQueue2()->push_back(aRad1);
    aStatic.getQueue2()->push_back(aPop);   

    // Vorderachse mit 2 Raedern ( Ende )
    aStatic.getQueue2()->push_back(aPop);   

    // **************        


    // Vorwaerts- oder Rueckwaertsbewegung ausfuehren
    aStatic.getQueue2()->push_back(aVorderachseBewegung);   

    // Von der Vorderachse zur Hinterachse 
    aStatic.getQueue2()->push_back(aTo_Hinterachse_Translation);

    // **************
    // Hinterachse mit 2 Raedern ( Begin )
    aStatic.getQueue2()->push_back(aPush);   

    // Vorwaerts- oder Rueckwaertsbewegung ausfuehren
    aStatic.getQueue2()->push_back(aVorderachseBewegung);   

    // Linkes Hinterrad
    aStatic.getQueue2()->push_back(aTo_LenkungsGelenk_Translation);
    aStatic.getQueue2()->push_back(aTo_Rad1_Translation);
    aStatic.getQueue2()->push_back(aRad1_Rotation);

    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aRadBewegung1);
    aStatic.getQueue2()->push_back(aRad1);
    aStatic.getQueue2()->push_back(aPop);   

    // Hintere Radachse
    aStatic.getQueue2()->push_back(aTo_Radachse1_Translation);
    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aRadBewegung1);
    aStatic.getQueue2()->push_back(aRadAchse1);
    aStatic.getQueue2()->push_back(aPop);   
    aStatic.getQueue2()->push_back(aTo_Rad2_Translation);

    // Rechtes Hinterrad
    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aRadBewegung1);
    aStatic.getQueue2()->push_back(aRad1);
    aStatic.getQueue2()->push_back(aPop);   

    // Hinterachse mit 2 Raedern ( Ende )
    aStatic.getQueue2()->push_back(aPop);   

    // **************        

    // **************        
    
    // Auto ( Ende )
    aStatic.getQueue2()->push_back(aPop);   

    // Szene ( Ende )
    aStatic.getQueue2()->push_back(aPop);   
        
}

#ifdef UNUSED
void Scene::init2(Static &aStatic)
{
    GLfloat aAbstand = 3.0;
    
    // Zeitbasis setzen
    aStatic.setTimePeriod(TIME_PERIOD);  
    
    // Anfangs-Winkel und Default-Winkelgeschwindigkeit einstellen
    // aStatic.setAspectRatio(1.0);
    // aStatic.setNearDistance(4.0);
    
    // Push
    ZPush *aPush = new ZPush;
    // Pop
    ZPop *aPop = new ZPop;
    
    // Uebung 2       
    // Schachbrett
    // DisplayListen anlegen und ID ablegen
    /**************************************************************/
    /* Darstellungsreihenfolge in der DisplayListe festlegen      */
    /**************************************************************/
    chessboard(aStatic.getDisplayListQueue(),9);    
    ZDisplayList *aZDisplayList = new ZDisplayList;
    aZDisplayList->setQueue(aStatic.getDisplayListQueue());
    aZDisplayList->store(aStatic.aOpenGL);

    // Uebung 2       
    // Betrachterposition und Perspektive
    WLookAt *aWLookAt = new WLookAt;
    aWLookAt->setEye(aStatic.getEye());
    aWLookAt->setCenter(aStatic.getCenter());
    aWLookAt->setUp(aStatic.getUp());
    aWLookAt->setPeriod( 2 * PI * 5); // in RAD ( 2*PI (RAD) = 360 Grad (DEG) )
    aWLookAt->setStep(0.1);

    // Uebung 2.7+2.8
    WPerspective *aWPerspective = new WPerspective;
    // Automatisches Veraendern der Kappungsgrenze, gemaess Algorithmus
    // aWPerspective->setPeriod( 120.0 / ( 2 * PI ) ); // in RAD ( 2*PI (RAD) = 360 Grad (DEG) )
    // Achtung, setPeriod(0.0) = Veraendern der Kappungsgrenze durch den Benutzer
    aWPerspective->setFieldOfViewAngle(65.0); // 65.0
    aWPerspective->setAspectRatio(1.0);
    aWPerspective->setFarDistance(50.0); // 50.0
    aWPerspective->setNearDistance(4.0);

    // Szene Kippen
    MSzeneKippen *aSzeneKippen = new MSzeneKippen;
    aSzeneKippen->setStep(10.0);

    // Achsenkreuz
    ZGraticule *aZGraticule2 = new ZGraticule;
    aZGraticule2->setLength(1.5);
    aZGraticule2->setLineWidth(1.5);

    // Beleuchtung im Ursprung
    ZLighting *aBeleuchtung = new ZLighting;

    #ifdef TEST
    aBeleuchtung->setNumber(0);
    // aBeleuchtung->setLightPosition(*(new LPosition<GLfloat>( 0.0, 0.0, 1.0, 0.0 ) ) );
    aBeleuchtung->setLightPosition( new Coordinates( 0.0, 0.0, 0.0), 1.0);    
    aBeleuchtung->setSpotlightDirection(*(new Coordinates( 0.0, 0.0, -1.0)));
    aBeleuchtung->setSpotlightExponent(1.0);
    aBeleuchtung->setSpotlightCutoffAngle(45.0);
    aBeleuchtung->setViewDirectionZ(false);
    aBeleuchtung->setLightRGBA(*(new Light<GLfloat>( 0.2, 0.2, 0.2, 1.0 )));
    aBeleuchtung->setAmbientRGBA(*(new Light<GLfloat>( 0.0, 0.0, 0.0, 1.0 )));
    aBeleuchtung->setDiffuseRGBA(*(new Light<GLfloat>( 1.0, 1.0, 1.0, 1.0 )));
    aBeleuchtung->setSpecularRGBA(*(new Light<GLfloat>( 1.0, 1.0, 1.0, 1.0 )));
    #endif
    
    // Kugel im Ursprung
    YSphere *aKugelImUrsprung = new YSphere;
    aKugelImUrsprung->setID(ID_KUGELIMURSPRUNG); 
    aKugelImUrsprung->setOuterRadius(0.3); // 0.1
    aKugelImUrsprung->setLighting(false); 
    aKugelImUrsprung->getColor().setR(1.0);
    aKugelImUrsprung->getColor().setG(1.0);
    aKugelImUrsprung->getColor().setB(1.0);
    MTranslation1 *aTo_KugelImUrsprung_Translation = new MTranslation1;
    // Zur Zeit noch fester Abstand
    aTo_KugelImUrsprung_Translation->setCoordinates(
                      *(new Coordinates( 0.0, 0.0, 0.0 ) ) );    
    aTo_KugelImUrsprung_Translation->setStep(0.25);

    // Schachbrett
    MQuadratS *aMQuadratS = new MQuadratS;
    aMQuadratS->setID(ID_MYSCHWARZESQUADRAT);  
    ZRectangle *aZRectangle = new ZRectangle;

    // Achsenkreuz
    ZGraticule *aZGraticule1 = new ZGraticule;
    aZGraticule1->setLength(10);
    aZGraticule1->setLineWidth(1.5);

    // Kippen 90 Grad in X-Richtung
    MRotation1 *aRotation2 = new MRotation1();
    aRotation2->setCoordinates(*(new Coordinates( 1.0, 0.0, 0.0 )));    
    aRotation2->setAngle(*new GLfloat(90.0)); 

    // Kippen 60 Grad in Z-Richtung, **unbenutze Operation **
    MRotation1 *aRotation3 = new MRotation1();
    aRotation3->setCoordinates(*(new Coordinates( 1.0, 1.0, 0.0 )));    
    aRotation3->setAngle(*new GLfloat(30.0)); 
        
    // violetter Dodec
    YDodec *aDodeca = new YDodec;
    aDodeca->getColor().setR(100.0/255.0); 
    aDodeca->getColor().setG(0.0);
    aDodeca->getColor().setB(100.0/255.0);
    ZTranslation *aTo_Dodeca_Translation = new ZTranslation;
    aTo_Dodeca_Translation->setCoordinates(
                      *(new Coordinates( +aAbstand, +aAbstand, 0.0 ) ) );    

    // dunkelgelber Icos
    YIcos *aIcosa = new YIcos;
    aIcosa->getColor().setR(150.0/255.0); 
    aIcosa->getColor().setG(150.0/255.0);
    aIcosa->getColor().setB(0.0);
    ZTranslation *aTo_Icosa_Translation = new ZTranslation;
    aTo_Icosa_Translation->setCoordinates(
                      *(new Coordinates( 0.0, -sqrt(2.0)*aAbstand, 0.0 ) ) );    

    // gruener Oct
    YOct *aOcta = new YOct;
    aOcta->getColor().setR(0.0);
    aOcta->getColor().setG(1.0);
    aOcta->getColor().setB(0.0);
    ZTranslation *aTo_Octa_Translation = new ZTranslation;
    aTo_Octa_Translation->setCoordinates(
                      *(new Coordinates( -aAbstand, +aAbstand, 0.0 ) ) );    

    // blauer Tetr
    YTetr *aTetra = new YTetr;
    aTetra->getColor().setR(0.0);
    aTetra->getColor().setG(0.0);
    aTetra->getColor().setB(1.0);
    ZTranslation *aTo_Tetra_Translation = new ZTranslation;
    aTo_Tetra_Translation->setCoordinates(
                      *(new Coordinates( sqrt(2.0)*aAbstand, 0.0, 0.0 ) ) );    

    // oranger Pot
    YPot *aPot = new YPot;
    aPot->setSize(1.0);
    aPot->getColor().setR(100.0/255.0); 
    aPot->getColor().setG(50.0/255.0);
    aPot->getColor().setB(0.0);
    ZTranslation *aTo_Pot_Translation = new ZTranslation;
    aTo_Pot_Translation->setCoordinates(
                      *(new Coordinates( -aAbstand, -aAbstand, 0.0 ) ) );    

    // gruener Kegel
    YCone *aKegel = new YCone;
    aKegel->setName(NAME_KEGEL); 
    aKegel->setID(ID_KEGEL); 
    aKegel->getColor().setR(0.0);
    aKegel->getColor().setG(1.0);
    aKegel->getColor().setB(0.0);
    ZTranslation *aTo_Kegel_Translation = new ZTranslation;
    aTo_Kegel_Translation->setCoordinates(
                      *(new Coordinates( +aAbstand, -aAbstand, 0.0 ) ) );    

    // Rotation
    MRotation1 *aAlleObjekte_Rotation = new MRotation1();
    aAlleObjekte_Rotation->setCoordinates(*(new Coordinates( 0.0, 0.0, 1.0 )));    
    aAlleObjekte_Rotation->setID(ID_ROTATION1); 
    aAlleObjekte_Rotation->setStep(0.5);

    // Grosse Kugel auf der Spitze des Kegels
    YSphere *aGrosseKugel = new YSphere;
    aGrosseKugel->setName(NAME_GROSSEKUGEL);
    aGrosseKugel->setID(ID_GROSSEKUGEL);
    aGrosseKugel->setOuterRadius(0.5);
	aGrosseKugel->setSides(17);
    aGrosseKugel->setRings(17);
    aGrosseKugel->getColor().setR(208.0/255.0);
    aGrosseKugel->getColor().setG(208.0/255.0);
    aGrosseKugel->getColor().setB(0.0);
    
     // Translation
    ZTranslation *aKegel_To_GrosseKugel_Translation = new ZTranslation;
    aKegel_To_GrosseKugel_Translation->setCoordinates(
                      *(new Coordinates( 0.0, 0.0, aKegel->getHeight()+aGrosseKugel->getOuterRadius() )));    

    // Kleine Kugel, umkreist die grosse Kugel
    YSphere *aKleineKugel = new YSphere;
    aKleineKugel->setName(NAME_KLEINEKUGEL);
    aKleineKugel->setID(ID_KLEINEKUGEL);
    aKleineKugel->setOuterRadius(0.2); // 0.1
    aKleineKugel->getColor().setR(1.0);
    aKleineKugel->getColor().setG(0.0);
    aKleineKugel->getColor().setB(0.0);

    // Translation
    ZTranslation *aGrosseKugel_To_KleineKugel_Translation = new ZTranslation;
    aGrosseKugel_To_KleineKugel_Translation->setCoordinates(
               *(new Coordinates( 0.0, (
                                  aGrosseKugel->getOuterRadius()+
                                  aKleineKugel->getOuterRadius() ), 
                                  0.0 )));    
                                  
    // Rotation
    MRotation2 *aKleineKugel_Rotation = new MRotation2();
    aKleineKugel_Rotation->setCoordinates(*(new Coordinates( 0.0, 0.0, 1.0 )));    
    aKleineKugel_Rotation->setID(ID_ROTATION2); 
    aKleineKugel_Rotation->setStep(2.0);
    aKleineKugel_Rotation->setFactor( aKleineKugel->getRelationOfFrequencies( *aGrosseKugel ));

    // Ring, umschwingt den Kegel
    YTorus *aRing = new YTorus;
   	aRing->setInnerRadius(0.2);
  	aRing->setOuterRadius(1.0);
  	aRing->setSides(17);
    aRing->setRings(17);
    aRing->getColor().setR(1.0);
    aRing->getColor().setG(120.0/255.0);
    aRing->getColor().setB(0.0);
    
    // Translation
    ZTranslation *aRing_Translation = new ZTranslation;
    aRing_Translation->setCoordinates(*(new Coordinates( 0.0, 0.0, 
                                                         aKegel->getHeight()/2)));
    // Rotation
    MRotation1 *aRing_Rotation = new MRotation1();
    aRing_Rotation->setCoordinates(*(new Coordinates( 1.0, 0.1, 0.1 )));    
    aRing_Rotation->setID(ID_ROTATION3); 
    aRing_Rotation->setStep(0.5);

    // Szenen-Veraenderung: 
    // Gleichartige Drehung von mehreren Objekten
    ZEvent *aVeraenderung1 = new ZEvent;
    MRotX1 *aRotate1 = new MRotX1(aAlleObjekte_Rotation);
    MRotX2 *aRotate2 = new MRotX2(aKleineKugel_Rotation);
    aVeraenderung1->push_back(aRotate1, ID_ROTATION1);      
    aVeraenderung1->push_back(aRotate2, ID_ROTATION2);      
    aVeraenderung1->push_back(aRotate1, ID_ROTATION3);      
    aVeraenderung1->push_back(aWLookAt);      
    aVeraenderung1->push_back(aWPerspective);      
    aVeraenderung1->setID(ID_VERAENDERUNG1); 
          
    // Eingaben der Callback-Routinen anmelden
    ZInput *aZInput;
    aZInput = aStatic.getZInput();

    aZInput->addToKeyboardTable(new MHoeherZ(aTo_KugelImUrsprung_Translation), 'x');
    aZInput->addToKeyboardTable(new MTieferZ(aTo_KugelImUrsprung_Translation), ':');
    aZInput->addToKeyboardTable(new MUrsprungZ(aTo_KugelImUrsprung_Translation), 'h');
    
    MFarbe1 *aFarbVeraenderung1 = new MFarbe1(aKleineKugel);
    aZInput->addToKeyboardTable(aFarbVeraenderung1, 'o');
    aZInput->addToKeyboardTable(aFarbVeraenderung1, 'k');
    aZInput->addToKeyboardTable(aSzeneKippen, 'k');
    aZInput->addToKeyboardTable(aRotate1, ' ');
    
    // aZInput->addToKeyboardTable(new MPerspetive1(aWPerspective),'a');
    // aZInput->addToSpecialTable(new MPerspetive1(aWPerspective),GLUT_KEY_HOME);
    // aZInput->addToKeyboardTable(new MPerspetive2(aWPerspective),'s');
    // aZInput->addToSpecialTable(new MPerspetive2(aWPerspective),GLUT_KEY_END);
    
    /**************************************************************/
    /* Szene veraendern                                           */
    /**************************************************************/
    aStatic.getQueue2()->push_back(aVeraenderung1, ID_VERAENDERUNG1);
       
    /**************************************************************/
    /* Darstellungsreihenfolge festlegen                          */
    /**************************************************************/
    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aWLookAt); 

    aStatic.getQueue2()->push_back(aWPerspective); 
    
    aStatic.getQueue2()->push_back(aZDisplayList); 
    aStatic.getQueue2()->push_back(aSzeneKippen,ID_SZENE_KIPPEN);   

    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aKleineKugel,ID_KLEINEKUGEL);
    aStatic.getQueue2()->push_back(aTo_KugelImUrsprung_Translation);
    aStatic.getQueue2()->push_back(aKugelImUrsprung,ID_KUGELIMURSPRUNG);
    aStatic.getQueue2()->push_back(aBeleuchtung);
    aStatic.getQueue2()->push_back(aZGraticule2);    
    aStatic.getQueue2()->push_back(aPop);   

    aStatic.getQueue2()->push_back(aZGraticule1);   
    
    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aTo_Dodeca_Translation);
    aStatic.getQueue2()->push_back(aAlleObjekte_Rotation);
    aStatic.getQueue2()->push_back(aDodeca);
    aStatic.getQueue2()->push_back(aZGraticule2);    
    aStatic.getQueue2()->push_back(aPop);   

    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aTo_Icosa_Translation);
    aStatic.getQueue2()->push_back(aAlleObjekte_Rotation);
    aStatic.getQueue2()->push_back(aIcosa);
    aStatic.getQueue2()->push_back(aZGraticule2);    
    aStatic.getQueue2()->push_back(aPop);   

    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aTo_Octa_Translation);
    aStatic.getQueue2()->push_back(aAlleObjekte_Rotation);
    aStatic.getQueue2()->push_back(aOcta);
    aStatic.getQueue2()->push_back(aZGraticule2);    
    aStatic.getQueue2()->push_back(aPop);   

    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aTo_Tetra_Translation);
    aStatic.getQueue2()->push_back(aZGraticule2);    
    aStatic.getQueue2()->push_back(aAlleObjekte_Rotation);
    aStatic.getQueue2()->push_back(aTetra);
    // aStatic.getQueue2()->push_back(aRotation3);
    aStatic.getQueue2()->push_back(aZGraticule2);    
    aStatic.getQueue2()->push_back(aPop);   

    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aTo_Pot_Translation);
    aStatic.getQueue2()->push_back(aAlleObjekte_Rotation);
    aStatic.getQueue2()->push_back(aRotation2);
    aStatic.getQueue2()->push_back(aPot);
    aStatic.getQueue2()->push_back(aZGraticule2);    
    aStatic.getQueue2()->push_back(aPop);   
    
    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aTo_Kegel_Translation);
    aStatic.getQueue2()->push_back(aAlleObjekte_Rotation);
    aStatic.getQueue2()->push_back(aKegel,ID_KEGEL);
    aStatic.getQueue2()->push_back(aZGraticule2);   
    aStatic.getQueue2()->push_back(aPush);   
    aStatic.getQueue2()->push_back(aKegel_To_GrosseKugel_Translation);
    aStatic.getQueue2()->push_back(aGrosseKugel,ID_GROSSEKUGEL);
    aStatic.getQueue2()->push_back(aZGraticule2);   
    aStatic.getQueue2()->push_back(aGrosseKugel_To_KleineKugel_Translation);
    aStatic.getQueue2()->push_back(aKleineKugel_Rotation);
    aStatic.getQueue2()->push_back(aKleineKugel,ID_KLEINEKUGEL);
    aStatic.getQueue2()->push_back(aZGraticule2);   
    aStatic.getQueue2()->push_back(aPop);   
    aStatic.getQueue2()->push_back(aRing_Translation);
    aStatic.getQueue2()->push_back(aRing_Rotation);
    aStatic.getQueue2()->push_back(aRing,ID_RING);
    aStatic.getQueue2()->push_back(aZGraticule2);    
    aStatic.getQueue2()->push_back(aPop);   
    aStatic.getQueue2()->push_back(aPop);   
        
}
#endif

#ifdef UNUSED
void Scene::calc(Static &aStatic){

    VektorElement<ZCmd*>* aVektorElement1 = new VektorElement<ZCmd*>;
    aVektorElement1 = aStatic.getQueue2()->find(ID_VERAENDERUNG1);

    ZEvent *aZEvent;
    aZEvent = ( ZEvent *)( aVektorElement1->getObjekt() );

    VektorElement<ZCmd*>* aVektorElement2 = new VektorElement<ZCmd*>;
    aVektorElement2 = aZEvent->getQueue()->find(ID_ROTATION1);

    MRotation1 *aRotation1;
    aRotation1 = ( MRotation1 *)( aVektorElement2->getObjekt() );

    VektorElement<ZCmd*>* aVektorElement3 = new VektorElement<ZCmd*>;
    aVektorElement3 = aZEvent->getQueue()->find(ID_ROTATION2);

    MRotation1 *aRotation2;
    aRotation2 = ( MRotation1 *)( aVektorElement3->getObjekt() );

    VektorElement<ZCmd*>* aVektorElement4 = new VektorElement<ZCmd*>;
    aVektorElement4 = aZEvent->getQueue()->find(ID_ROTATION3);

    MRotation1 *aRotation3;
    aRotation3 = ( MRotation1 *)( aVektorElement4->getObjekt() );
   
    aRotation1->update();
    aRotation2->update();
    aRotation3->update();
}

void Scene::calcAngles(Static &aStatic){

    int aLaufVariable1 = 0, aLaufVariable2 = 0;
    int isFound1, isFound2;
    GLfloat y;

    // neue Kalkulation
    // calc(aStatic);
    
    // Uebung 1
    GLfloat x = aStatic.getAngle1()+aStatic.getDeltaAngle();
    aStatic.setAngle1(x);
        
    // Vektor darf nicht leer sein 
    if ( aStatic.getQueue2()->size() > 0 ) 
     {
      do
       {
         isFound1 = ( ID_KLEINEKUGEL == 
                      ( *(* aStatic.getQueue2())[aLaufVariable1].getObjekt()).getID() );
       } while ( (++aLaufVariable1 < aStatic.getQueue2()->size()) && (isFound1 != 0) );
      // Solange wie LaufVariable1 NACH Inkrement noch kleiner als die
      // Groesse des Vektors ist
    
      do
       {
         isFound2 = ( ID_GROSSEKUGEL == 
                      ( *(* aStatic.getQueue2())[aLaufVariable1].getObjekt()).getID() );
       } while ( (++aLaufVariable2 < aStatic.getQueue2()->size()) && 
                 (isFound2 != 0) );
      // Solange wie LaufVariable2 NACH Inkrement noch kleiner als die
      // Groesse des Vektors ist
    
      if ( ( isFound1 == 0 ) && ( isFound2 == 0 ) )
       {       
         YSphere *aAeussereKugel = 
                   ( YSphere *)( *aStatic.getQueue2())[aLaufVariable1-1].getObjekt();
         YSphere *aInnereKugel = 
                   ( YSphere *)( *aStatic.getQueue2())[aLaufVariable2-1].getObjekt();
         y = aStatic.getAngle2()+ aStatic.getDeltaAngle() *
             aInnereKugel->getRelationOfFrequencies( *aAeussereKugel );
       }
      else
       {
         // Aushilfsweise wird y = x gesetzt
         y = x;
         cout << "Fataler Fehler: OpenGL Objekte wurden nicht gefunden !" << endl;   
       };
     }
    else 
     {
        // Vektor ist leer
        cout << "Fataler Fehler: Es existieren gar keine OpenGL Objekte !" << endl;   
        y = x;
     };
     
    aStatic.setAngle2(y);

}

void Scene::calcAnglesByNames(Static &aStatic){

    int aLaufVariable1 = 0, aLaufVariable2 = 0;
    int isFound1, isFound2;
    GLfloat y;
    
    // Uebung 1
    GLfloat x = aStatic.getAngle1()+aStatic.getDeltaAngle();
    aStatic.setAngle1(x);
        
    // Vektor darf nicht leer sein 
    if ( aStatic.getQueue2()->size() > 0 ) 
     {
      do
       {
         isFound1 = strcmp( NAME_KLEINEKUGEL,
                            ( *(* aStatic.getQueue2())[aLaufVariable1].getObjekt()).getName()
                          ); 
       } while ( (++aLaufVariable1 < aStatic.getQueue2()->size()) && (isFound1 != 0) );
      // Solange wie LaufVariable1 NACH Inkrement noch kleiner als die
      // Groesse des Vektors ist
    
      do
       {
         isFound2 = strcmp( NAME_GROSSEKUGEL,
                            (* (* aStatic.getQueue2())[aLaufVariable2].getObjekt()).getName()
                          ); 
       } while ( (++aLaufVariable2 < aStatic.getQueue2()->size()) && (isFound2 != 0) );
      // Solange wie LaufVariable2 NACH Inkrement noch kleiner als die
      // Groesse des Vektors ist
    
      if ( ( isFound1 == 0 ) && ( isFound2 == 0 ) )
       {
         YSphere *aAeussereKugel = 
          ( YSphere *)( *aStatic.getQueue2())[aLaufVariable1-1].getObjekt();
         YSphere *aInnereKugel = 
          ( YSphere *)( *aStatic.getQueue2())[aLaufVariable2-1].getObjekt();
         y = aStatic.getAngle2()+ aStatic.getDeltaAngle() *
             aInnereKugel->getRelationOfFrequencies( *aAeussereKugel );
       }
      else
       {
         // Aushilfsweise wird y = x gesetzt
         y = x;
         cout << "Fataler Fehler: OpenGL Objekte wurden nicht gefunden !" << endl;   
       };
     }
    else 
     {
        // Vektor ist leer
        cout << "Fataler Fehler: Es existieren gar keine OpenGL Objekte !" << endl;   
        y = x;
     };
     
    aStatic.setAngle2(y);

}
#endif


