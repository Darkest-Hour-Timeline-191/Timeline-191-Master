##############################
# Country definition for AFG #
##############################

country = {
  tag                = AFG
  capital            = 1493 # Kabel
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = -75 }
    relation = { tag = ITA value = 50 }
    relation = { tag = PER value = 25 }
    relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 1 }
    relation = { tag = TUR value = 50 }
  }

  nationalprovinces      = { 1486 1493 1492 1484 2864 2865 2866 2867 5379 5380 5381 5382 5383 5384 5385 5386 5387 5388 5389 5390 5391 5392 5393 5394 5395 5396 5397 5398 5399 5400 5401 5402 5403 5404 7983 }
  ownedprovinces         = { 1486 1493 1492 1484 2864 2865 2866 2867 5379 5380 5381 5382 5383 5384 5385 5386 5387 5388 5389 5390 5391 5392 5393 5394 5395 5396 5397 5398 5399 5400 5401 5402 5403 5404 7983 }
  controlledprovinces    = { 1486 1493 1492 1484 2864 2865 2866 2867 5379 5380 5381 5382 5383 5384 5385 5386 5387 5388 5389 5390 5391 5392 5393 5394 5395 5396 5397 5398 5399 5400 5401 5402 5403 5404 7983 }
  claimedprovinces       = { 4227 }

  techapps               = { 2860 1910 1920 1930 1940 1950 1960 2290 7600 7610 1010 1020 1030 1040 1050 1060 1070 1160 1170 1180 1190 1200 1210 1220 1230 13060 13070 13080 1310 1320 1330 1340 1350 5700 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    freedom           = 6
    free_market       = 7
    professional_army = 5
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 54001 }
  headofgovernment       = { type = 9 id = 54002 }
  foreignminister        = { type = 9 id = 54003 }
  armamentminister       = { type = 9 id = 54004 }
  ministerofsecurity     = { type = 9 id = 54005 }
  ministerofintelligence = { type = 9 id = 54006 }
  chiefofstaff           = { type = 9 id = 54007 }
  chiefofarmy            = { type = 9 id = 54008 }
  chiefofnavy            = { type = 9 id = 54009 }
  chiefofair             = { type = 9 id = 54010 }

  landunit = {
    id       = { type = 10000 id = 1 }
    name     = "The Center Military District"
    location = 1493
    division = {
      id             = { type = 10000 id = 2 }
      name           = "Royal Household Division"
      type           = infantry
      model          = 7
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 100
    }
    division = {
      id             = { type = 10000 id = 3 }
      name           = "1st Infantry Division"
      type           = infantry
      model          = 6
      strength       = 20
    }
    division = {
      id             = { type = 10000 id = 4 }
      name           = "2nd Infantry Division"
      type           = infantry
      model          = 6
      strength       = 20
    }
    division = {
      id             = { type = 10000 id = 5 }
      name           = "4th Infantry Division"
      type           = infantry
      model          = 6
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 10000 id = 6 }
    name     = "The South Military District"
    location = 1493
    division = {
      id             = { type = 10000 id = 7 }
      name           = "5th Infantry Division"
      type           = infantry
      model          = 6
      strength       = 20
    }
    division = {
      id             = { type = 10000 id = 8 }
      name           = "6th Infantry Division"
      type           = infantry
      model          = 6
      strength       = 20
    }
    division = {
      id             = { type = 10000 id = 9 }
      name           = "7th Infantry Division"
      type           = infantry
      model          = 6
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 10000 id = 10 }
    name     = "Farah Military District"
    location = 1493
    division = {
      id             = { type = 10000 id = 11 }
      name           = "Farah Cavalry"
      type           = cavalry
      model          = 6
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10000 id = 12 }
    name     = "Ghazni Military District"
    location = 1493
    division = {
      id             = { type = 10000 id = 13 }
      name           = "Ghazni Mixed Infantry"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 10000 id = 14 }
    name     = "Kandahar Military District"
    location = 1493
    division = {
      id             = { type = 10000 id = 15 }
      name           = "Kandahar Mixed Infantry"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 10000 id = 16 }
    name     = "Herat Military District"
    location = 1493
    division = {
      id             = { type = 10000 id = 17 }
      name           = "Herat Mixed Infantry"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 10000 id = 18 }
    name     = "Turkestan Military District"
    location = 1493
    division = {
      id             = { type = 10000 id = 19 }
      name           = "Turkestan Mixed Infantry"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 10000 id = 20 }
    name     = "Kadaghan & Badakhchan Military District"
    location = 1493
    division = {
      id             = { type = 10000 id = 21 }
      name           = "Kadaghan & Badakhchan Mixed Infantry"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 10000 id = 22 }
    name     = "Maymeneh Military District"
    location = 1493
    division = {
      id             = { type = 10000 id = 23 }
      name           = "Maymeneh Mixed Infantry"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 10000 id = 24 }
    name     = "The East Military District"
    location = 1493
    division = {
      id             = { type = 10000 id = 25 }
      name           = "The East Mixed Infantry"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 20
    }
  }
}
