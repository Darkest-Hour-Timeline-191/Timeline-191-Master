##############################
# Country definition for ARG #
##############################
province = {
  id = 667 # La Plata
  anti_air = 2
  air_base = { size = 3 current_size = 3 }
  naval_base = { size = 8 current_size = 8 }
}
province = {
  id = 851 # Buenos Aires
  anti_air = 3
  air_base = { size = 3 current_size = 3 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 857 # Mar del Plata
  anti_air = 3
  naval_base = { size = 6 current_size = 6 }
}

#####################
# Country main data #
#####################

country = {
  tag                = ARG
  capital            = 851 # Buenos Aires
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = BOL value = 50 }
    relation = { tag = BRA value = -10 }
    relation = { tag = CHL value = -20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ENG value = 75 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 75 }
    relation = { tag = IRE value = 20 }
    relation = { tag = ITA value = 30 }
    relation = { tag = PAR value = 50 }
    relation = { tag = PRU value = 20 }
    relation = { tag = URU value = -50 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }

  nationalprovinces      = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 850 2554 2653 2654 2655 2860 2931 2998 2932 2933 2934 2935 2954 2955 2956 2957 2958 2959 2490 1943 3893 3894 3895 3896 3897 3898 3899 3900 3901 3902 3903 3904 3905 3906 3907 3908 3909 3910 3911 3912 3913 3914 3915 3916 3917 3918 3919 3920 3921 3922 3923 3924 3925 3926 3927 3928 3929 3930 3931 3932 3933 3934 3935 3936 3937 3938 3939 3940 3941 3942 3943 3944 3945 3946 3947 3948 3949 5447 5448 5449 5450 5451 837 5444 7423 }
  ownedprovinces         = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 850 2554 2653 2654 2655 2860 2931 2998 2932 2933 2934 2935 2954 2955 2956 2957 2958 2959 2490 1943 3893 3894 3895 3896 3897 3898 3899 3900 3901 3902 3903 3904 3905 3906 3907 3908 3909 3910 3911 3912 3913 3914 3915 3916 3917 3918 3919 3920 3921 3922 3923 3924 3925 3926 3927 3928 3929 3930 3931 3932 3933 3934 3935 3936 3937 3938 3939 3940 3941 3942 3943 3944 3945 3946 3947 3948 3949 5447 5448 5449 5450 7423 }
  controlledprovinces    = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 850 2554 2653 2654 2655 2860 2931 2998 2932 2933 2934 2935 2954 2955 2956 2957 2958 2959 2490 1943 3893 3894 3895 3896 3897 3898 3899 3900 3901 3902 3903 3904 3905 3906 3907 3908 3909 3910 3911 3912 3913 3914 3915 3916 3917 3918 3919 3920 3921 3922 3923 3924 3925 3926 3927 3928 3929 3930 3931 3932 3933 3934 3935 3936 3937 3938 3939 3940 3941 3942 3943 3944 3945 3946 3947 3948 3949 5447 5448 5449 5450 7423 }
  claimedprovinces       = { 866 5456 5462 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4600 4610 4620 4630 4120 4130 4740 4750 4760 7600 7610 2620 2010 2630 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 1840 1850 1860 5600 5610 5620 5700 5710 5010 5020 5810 5820 5050 5830 5060 5800 5080 5310 54010 54020 54030 5316 5326 3010 3020 3030 3040 3050 3110 3120 3130 3140 3210 3220 3230 3240 3410 3420 3430 3440 3450 3456 3460 3610 3620 3630 3720 3730 3736 3740 3900 3810 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 8010 8020 8040 8050 8100 8900 8910 8920 8930 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 6
    free_market       = 8
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 165001 } # Agust�n P. Justo
  headofgovernment       = { type = 9 id = 165002 } # Agust�n P. Justo
  foreignminister        = { type = 9 id = 165003 } # Carlos Saavedra Lamas
  armamentminister       = { type = 9 id = 165004 } # Alberto Hueyo
  ministerofsecurity     = { type = 9 id = 165005 } # Ramon Castillo
  ministerofintelligence = { type = 9 id = 165006 } # Jorge de la Torre
  chiefofstaff           = { type = 9 id = 165007 } # Manuel A. Rodriguez
  chiefofarmy            = { type = 9 id = 165008 } # Manuel A. Rodriguez
  chiefofnavy            = { type = 9 id = 165009 } # Pedro S. Casal
  chiefofair             = { type = 9 id = 165010 } # Antonio Parodi

  landunit = {
    id       = { type = 12000 id = 1 }
    name     = "I Cuerpo de Ej�rcito"
    location = 851
    division = {
      id             = { type = 12000 id = 2 }
      name           = "Supreme HQ"
      type           = hq
      model          = 2
      strength       = 100
    }
    division = {
      id             = { type = 12000 id = 3 }
      name           = "III Brigada 'Pellegrini'"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 6
      strength       = 100
    }
    division = {
      id             = { type = 12000 id = 4 }
      name           = "II Brigada 'San Mart�n'"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 6
      strength       = 60
    }
    division = {
      id             = { type = 12000 id = 5 }
      name           = "II Brigada de Monta�a"
      type           = bergsjaeger
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 12000 id = 6 }
      name           = "I Brigada 'Ing. Krausse'"
      type           = infantry
      model          = 6
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 12000 id = 7 }
    name     = "II Cuerpo de Ej�rcito"
    location = 851
    division = {
      id             = { type = 12000 id = 8 }
      name           = "VI Brigada de Monta�a 'Villegas'"
      type           = bergsjaeger
      model          = 6
      strength       = 35
    }
    division = {
      id             = { type = 12000 id = 9 }
      name           = "IV Brigada de Infanter�a"
      type           = infantry
      model          = 6
      extra          = anti_air
      brigade_model  = 1
      strength       = 100
    }
    division = {
      id             = { type = 12000 id = 10 }
      name           = "IX Brigada de Infanter�a"
      type           = infantry
      model          = 6
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 12000 id = 11 }
    name     = "III Cuerpo de Ej�rcito"
    location = 851
    division = {
      id             = { type = 12000 id = 12 }
      name           = "VI Brigada"
      type           = cavalry
      model          = 9
      strength       = 30
    }
    division = {
      id             = { type = 12000 id = 13 }
      name           = "IV Brigada"
      type           = cavalry
      model          = 9
      strength       = 30
    }
    division = {
      id             = { type = 12000 id = 14 }
      name           = "IX Brigada"
      type           = cavalry
      model          = 9
      strength       = 30
    }
  }

  navalunit = {
    id       = { type = 12000 id = 15 }
    name     = "Argentinian Navy"
    location = 851
    base     = 851
    division = {
      id             = { type = 12000 id = 16 }
      name           = "ARA Veinticinco De Mayo"
      type           = heavy_cruiser
      model          = 3
    }
    division = {
      id             = { type = 12000 id = 17 }
      name           = "ARA Almirante Brown"
      type           = heavy_cruiser
      model          = 3
    }
    division = {
      id             = { type = 12000 id = 18 }
      name           = "ARA Moreno"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 12000 id = 20 }
      name           = "ARA Rivadavia"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 12000 id = 22 }
      name           = "ARA Independencia"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 12000 id = 24 }
      name           = "ARA La Libertad"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 12000 id = 26 }
      name           = "ARA Generale Belgrano"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12000 id = 28 }
      name           = "ARA Generale Pueyrredon"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12000 id = 30 }
      name           = "Flotilla de Destructores nro. 1"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 12000 id = 32 }
      name           = "Flotilla de Destructores nro. 2"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 12000 id = 33 }
      name           = "Flotilla de Submarinos nro. 1"
      type           = submarine
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 12000 id = 36 }
    name     = "Aviaci�n del Ej�rcito"
    location = 851
    base     = 851
    division = {
      id             = { type = 12000 id = 37 }
      name           = "Grupo A�rea Nro. 1"
      type           = multi_role
      model          = 5
      strength       = 90
    }
  }
  airunit = { 
    id       = { type = 12000 id = 38 }
    name     = "Aviaci�n Naval"
    location = 851
    base     = 851
    division = {
      id             = { type = 12000 id = 39 }
      name           = "Fuerza Aeronaval Nro. 1"
      type           = naval_bomber
      model          = 1
      strength       = 40
    }
  }
}
