##############################
# Country definition for ETH #
##############################
province = {
  id = 1046 # Addis Abäba
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
}
province = { id = 1051 landfort = 1 } # Harar
province = { id = 1054 landfort = 1 } # Kelafo

#####################
# Country main data #
#####################

country = {
  tag                = ETH
  capital            = 1046 # Addis Abäba
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 25 }
    relation = { tag = IRE value = 100 }
    relation = { tag = ITA value = -200 }
    relation = { tag = JAP value = 35 }
  }

  nationalprovinces      = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 1033 1038 1039 2342 4658 4659 4660 4661 4662 4663 4664 4665 4666 4667 4668 4669 4670 4671 4672 4673 4674 4675 4676 4677 4678 4679 4680 4682 6539 6540 6541 6542 7445 7448 7449 7446 7346 7447 7935 }
  ownedprovinces         = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 2342 4658 4659 4660 4661 4662 4663 4664 4665 4666 4667 4668 4669 4670 4671 4672 4673 4674 4675 4676 4677 4678 4679 4680 6539 6540 6541 6542 7445 7448 7449 }
  controlledprovinces    = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 2342 4658 4659 4660 4661 4662 4663 4664 4665 4666 4667 4668 4669 4670 4671 4672 4673 4674 4675 4676 4677 4678 4679 4680 6539 6540 6541 6542 7445 7448 7449 }
  claimedprovinces       = { 7450 }

  techapps               = { 4500 4510 4520 4530 2860 2290 1910 1920 1930 1940 1950 1960 2800 7600 7610 1010 1020 1030 1040 1050 1060 1070 1160 1170 1180 1190 1200 1210 1220 13060 13070 13080 1310 1320 1330 1340 5700 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 7
    professional_army = 7
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 245001 } # Haile Selassie I
  headofgovernment       = { type = 9 id = 245002 } # Bedjironde Tekle Hawariate
  foreignminister        = { type = 9 id = 245003 } # Herouy Wolde Selassie
  armamentminister       = { type = 9 id = 245004 } # Herouy Wolde Selassie
  ministerofsecurity     = { type = 9 id = 245005 } # Bedjironde Tekle Hawariate
  ministerofintelligence = { type = 9 id = 245006 } # Haile Selassie I
  chiefofstaff           = { type = 9 id = 245007 } # Ras Mulugueta
  chiefofarmy            = { type = 9 id = 245008 } # Desta Damtew
  chiefofnavy            = { type = 9 id = 245009 } # Ras Seyum
  chiefofair             = { type = 9 id = 245010 } # John Robinson

  landunit = {
    id       = { type = 31000 id = 1 }
    name     = "Imperial Guard"
    location = 1046
    division = {
      id             = { type = 31000 id = 2 }
      name           = "Kebur Zabagna"
      type           = infantry
      model          = 7
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 31000 id = 3 }
    name     = "Army of the Left"
    location = 1046
    division = {
      id             = { type = 31000 id = 4 }
      name           = "Gojjam  Sefari"
      type           = infantry
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 31000 id = 5 }
      name           = "Wolqayt Sefari"
      type           = militia
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 31000 id = 6 }
      name           = "Semien Sefari"
      type           = militia
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 31000 id = 7 }
      name           = "1/Gojjam Levies"
      type           = militia
      model          = 1
      strength       = 80
    }
    division = {
      id             = { type = 31000 id = 8 }
      name           = "2/Gojjam Levies"
      type           = militia
      model          = 1
      strength       = 80
    }
    division = {
      id             = { type = 31000 id = 9 }
      name           = "3/Gojjam Levies"
      type           = militia
      model          = 1
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 31000 id = 10 }
    name     = "Army of the Center"
    location = 1046
    division = {
      id             = { type = 31000 id = 11 }
      name           = "Amino Sefari"
      type           = infantry
      model          = 1
      strength       = 60
    }
    division = {
      id             = { type = 31000 id = 12 }
      name           = "Gubba Sefari"
      type           = infantry
      model          = 1
      strength       = 60
    }
    division = {
      id             = { type = 31000 id = 13 }
      name           = "Gurage Sefari"
      type           = infantry
      model          = 1
      strength       = 60
    }
    division = {
      id             = { type = 31000 id = 14 }
      name           = "Jimma Sefari"
      type           = infantry
      model          = 1
      strength       = 60
    }
    division = {
      id             = { type = 31000 id = 15 }
      name           = "Mui Sefari"
      type           = infantry
      model          = 1
      strength       = 60
    }
    division = {
      id             = { type = 31000 id = 16 }
      name           = "Om Hajer Sefari"
      type           = infantry
      model          = 1
      strength       = 60
    }
    division = {
      id             = { type = 31000 id = 17 }
      name           = "Sela Sefari"
      type           = infantry
      model          = 1
      strength       = 60
    }
    division = {
      id             = { type = 31000 id = 18 }
      name           = "Sodo Sefari"
      type           = infantry
      model          = 1
      strength       = 60
    }
    division = {
      id             = { type = 31000 id = 19 }
      name           = "Welega Sefari"
      type           = infantry
      model          = 1
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 31000 id = 20 }
    name     = "Army of the Right"
    location = 1046
    division = {
      id             = { type = 31000 id = 21 }
      name           = "1/Begemder  Sefari"
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 31000 id = 22 }
      name           = "2/Begemder  Sefari"
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 31000 id = 23 }
      name           = "3/Begemder  Sefari"
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 31000 id = 24 }
      name           = "4/Begemder  Sefari"
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 31000 id = 25 }
      name           = "5/Begemder  Sefari"
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 31000 id = 26 }
      name           = "6/Begemder  Sefari"
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 31000 id = 27 }
      name           = "7/Begemder  Sefari"
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 31000 id = 28 }
      name           = "8/Begemder  Sefari"
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 31000 id = 29 }
      name           = "9/Begemder  Sefari"
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 31000 id = 30 }
      name           = "10/Begemder  Sefari"
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 31000 id = 31 }
      name           = "11/Begemder  Sefari"
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 31000 id = 32 }
      name           = "1/Tigray Sefari"
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 31000 id = 33 }
      name           = "2/Tigray Sefari"
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 31000 id = 34 }
      name           = "3/Tigray Sefari"
      type           = militia
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 31000 id = 35 }
      name           = "1/Wag Sefari"
      type           = militia
      model          = 0
      strength       = 70
    }
    division = {
      id             = { type = 31000 id = 36 }
      name           = "2/Wag Sefari"
      type           = militia
      model          = 0
      strength       = 70
    }
    division = {
      id             = { type = 31000 id = 37 }
      name           = "1/Lasta Sefari"
      type           = infantry
      model          = 1
      strength       = 90
    }
    division = {
      id             = { type = 31000 id = 38 }
      name           = "2/Lasta Sefari"
      type           = infantry
      model          = 1
      strength       = 90
    }
    division = {
      id             = { type = 31000 id = 39 }
      name           = "1/Yejju Sefari"
      type           = infantry
      model          = 1
      strength       = 90
    }
    division = {
      id             = { type = 31000 id = 40 }
      name           = "2/Yejju Sefari"
      type           = infantry
      model          = 1
      strength       = 90
    }
  }
  landunit = {
    id       = { type = 31000 id = 41 }
    name     = "Danakil region"
    location = 1046
    division = {
      id             = { type = 31000 id = 42 }
      name           = "Danakil Sefari"
      type           = militia
      model          = 2
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 31000 id = 43 }
    name     = "Northern front reserves"
    location = 1046
    division = {
      id             = { type = 31000 id = 44 }
      name           = "1/Ifrata Sefari"
      type           = infantry
      model          = 1
      strength       = 90
    }
    division = {
      id             = { type = 31000 id = 45 }
      name           = "2/Ifrata Sefari"
      type           = infantry
      model          = 1
      strength       = 90
    }
    division = {
      id             = { type = 31000 id = 46 }
      name           = "Welega-Ardjo Sefari"
      type           = infantry
      model          = 5
      extra          = anti_air
      brigade_model  = 1
      strength       = 75
    }
    division = {
      id             = { type = 31000 id = 47 }
      name           = "1/Kaffa Sefari"
      type           = infantry
      model          = 1
      strength       = 90
    }
    division = {
      id             = { type = 31000 id = 48 }
      name           = "2/Kaffa Sefari"
      type           = infantry
      model          = 1
      strength       = 90
    }
    division = {
      id             = { type = 31000 id = 49 }
      name           = "Wollo Sefari"
      type           = militia
      model          = 1
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 31000 id = 50 }
    name     = "Southern front"
    location = 1046
    division = {
      id             = { type = 31000 id = 51 }
      name           = "Ogaden Sefari"
      type           = militia
      model          = 1
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 31000 id = 52 }
    name     = "Hararghe  Sefari"
    location = 1046
    division = {
      id             = { type = 31000 id = 53 }
      name           = "1/Illubabor Sefari"
      type           = militia
      model          = 1
      strength       = 80
    }
    division = {
      id             = { type = 31000 id = 54 }
      name           = "2/Illubabor Sefari"
      type           = militia
      model          = 1
      strength       = 80
    }
    division = {
      id             = { type = 31000 id = 55 }
      name           = "3/Illubabor Sefari"
      type           = militia
      model          = 1
      strength       = 80
    }
    division = {
      id             = { type = 31000 id = 56 }
      name           = "Gemu Gofa Sefari"
      type           = militia
      model          = 0
      strength       = 60
    }
    division = {
      id             = { type = 31000 id = 57 }
      name           = "Arusi Sefari"
      type           = militia
      model          = 1
      strength       = 60
    }
    division = {
      id             = { type = 31000 id = 58 }
      name           = "Kula Sefari"
      type           = militia
      model          = 1
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 31000 id = 59 }
    name     = "Webi Shebelle front"
    location = 1046
    division = {
      id             = { type = 31000 id = 60 }
      name           = "Bale Sefari"
      type           = militia
      model          = 1
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 31000 id = 61 }
    name     = "Juba front"
    location = 1046
    division = {
      id             = { type = 31000 id = 62 }
      name           = "1/Sidamo Sefari"
      type           = infantry
      model          = 3
      strength       = 80
    }
    division = {
      id             = { type = 31000 id = 63 }
      name           = "2/Sidamo Sefari"
      type           = infantry
      model          = 3
      extra          = anti_air
      brigade_model  = 1
      strength       = 80
    }
  }
}
