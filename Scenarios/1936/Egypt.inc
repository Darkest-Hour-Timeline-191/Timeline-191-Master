##############################
# Country definition for EGY #
##############################
province = {
  id = 901 # Bur Sa'id
  anti_air = 2
  naval_base = { size = 2 current_size = 2 }
}
province = {
  id = 903 # al-Qahira
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
}
province = {
  id = 907 # al-Iskandariyya
  anti_air = 5
  air_base = { size = 7 current_size = 7 }
  naval_base = { size = 10 current_size = 10 }
}

#####################
# Country main data #
#####################

country = {
  tag                = EGY
  puppet             = ENG
  capital            = 903 # al-Qahira
  manpower           = 200
  # Resource Reserves
  energy         = 540
  metal          = 270
  rare_materials = 135
  oil            = 500
  supplies       = 50
  money          = 50
  transports     = 100

  diplomacy = {
    relation = { tag = GER value = 80 }
  }
  SpyInfo                = { country = "EGY" NumberOfSpies = 3 }

  nationalprovinces      = { 903 2897 915 909 913 914 911 910 907 904 906 902 1800 1801 4 1025 1026 1027 1024 1023 905 1020 912 1021 2898 2633 900 901 2899 4601 4602 4603 4604 4605 4606 4607 4608 4609 4610 4611 4612 4613 4614 4615 4616 4617 7298 7985 1799 }
  ownedprovinces         = { 903 2897 915 909 913 914 911 910 907 904 906 902 4 1025 1026 1027 1024 1023 905 1020 912 1021 2898 901 4601 4602 4603 4606 4607 4608 4609 4610 4611 4612 4613 4614 4615 4616 4617 7298 7985 }
  controlledprovinces    = { 903 2897 915 909 913 914 911 910 907 904 906 902 4 1025 1026 1027 1024 1023 905 1020 912 1021 2898 901 4601 4602 4603 4606 4607 4608 4609 4610 4611 4612 4613 4614 4615 4616 4617 7298 7985 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 2860 2870 2880 2020 2290 2300 2310 2800 2450 3010 3020 3030 3040 3110 3120 3130 3140 3210 3220 3230 4500 4510 4520 4530 4540 4550 4010 4020 5800 5080 1830 1840 3720 3730 3736 3740 3750 3900 3810 5600 5610 5620 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 8010 8020 8050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 3
    freedom           = 10
    free_market       = 8
    professional_army = 6
    defense_lobby     = 3
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 340001 } # Fuad I
  headofgovernment       = { type = 9 id = 340002 } # Ali Mahir Pasha
  foreignminister        = { type = 9 id = 340003 } # Ali Mahir Pasha
  armamentminister       = { type = 9 id = 340004 } # Mohammed al Fransawi
  ministerofsecurity     = { type = 9 id = 340005 } # Mustafa an-Nahhas Pasha
  ministerofintelligence = { type = 9 id = 340006 } # Mohammed Hilmi Issa
  chiefofstaff           = { type = 9 id = 340007 } # Hassan Sabry Pasha
  chiefofarmy            = { type = 9 id = 340008 } # Hassan Sabry Pasha
  chiefofnavy            = { type = 9 id = 340009 } # Abdallah Ziwar Pasha
  chiefofair             = { type = 9 id = 340010 } # Fuad I

  landunit = {
    id       = { type = 19600 id = 1 }
    name     = "Royal Egyptian Army"
    location = 903
    division = {
      id             = { type = 19600 id = 2 }
      name           = "Royal Guard"
      type           = infantry
      model          = 7
      strength       = 12
      max_strength   = 12
      experience     = 20
    }
    division = {
      id             = { type = 19600 id = 3 }
      name           = "1st Egyptian Infantry"
      type           = infantry
      model          = 6
      strength       = 100
    }
  }

  airunit = { 
    id       = { type = 19600 id = 4 }
    name     = "Egyptian Army Air Force"
    location = 907
    base     = 907
    division = {
      id             = { type = 19600 id = 5 }
      name           = "Egyptian Army Air Force"
      type           = interceptor
      model          = 4
      strength       = 50
    }
  }
}
