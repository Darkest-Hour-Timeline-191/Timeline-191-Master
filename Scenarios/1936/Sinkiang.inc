##############################
# Country definition for SIK #
##############################

country = {
  tag                = SIK
  capital            = 1433 # Dihua
  dissent            = 30
  manpower           = 200
  # Resource Reserves
  energy         = 20000
  metal          = 20000
  rare_materials = 5000
  oil            = 5000
  supplies       = 2000
  money          = 10

  diplomacy = {
    relation = { tag = CHC value = 40 }
    relation = { tag = SOV value = 125 }
    relation = { tag = TAN value = 125 }
  }

  nationalprovinces      = { 1421 1432 1433 1435 1445 1446 1447 1430 1431 1728 3737 3738 3739 3740 3741 3742 3743 3744 3745 3746 3747 3748 3749 5481 5482 5483 5484 5485 5486 5487 5488 5489 5490 5491 5492 5493 5494 5495 5496 5497 5498 5499 5500 5501 5502 5503 5504 6920 }
  ownedprovinces         = { 1435 1445 1447 1421 1432 1433 1446 1431 3737 3738 3739 3740 3741 3742 3743 3744 3745 3746 3747 3748 3749 5481 5482 5483 5484 5485 5486 5487 5488 5489 5490 5491 5492 5493 5494 5495 5496 5497 5498 5499 5500 5501 5502 5503 5504 }
  controlledprovinces    = { 1421 1432 1433 1446 1431 1445 1447 1435 3737 3738 3739 3740 3741 3742 3743 3744 3745 3746 3747 3748 3749 5481 5482 5483 5484 5485 5486 5487 5488 5489 5490 5491 5492 5493 5494 5495 5496 5497 5498 5499 5500 5501 5502 5503 5504 }
  claimedprovinces       = { 1420 7917 }

  techapps               = { 5810 5820 5050 5800 5316 5326 1010 1020 1030 1040 1050 1060 1160 1170 1180 1190 1200 1210 13060 13070 13080 1310 1320 1330 1340 1350 1830 1910 1920 1930 1940 1950 2290 2300 2310 6570 14000 14010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 }
  blueprints             = { 1070 1220 1360 5327 5700 5600 7600 7610 2620 2010 2860 2870 2920 2900 2910 14020 4500 4510 4520 4530 4540 4300 4310 4320 4600 4610 4620 4630 4800 4810 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 72001 }
  headofgovernment       = { type = 9 id = 72002 }
  foreignminister        = { type = 9 id = 72003 }
  armamentminister       = { type = 9 id = 72004 }
  ministerofsecurity     = { type = 9 id = 72005 }
  ministerofintelligence = { type = 9 id = 72006 }
  chiefofstaff           = { type = 9 id = 72007 }
  chiefofarmy            = { type = 9 id = 72008 }
  chiefofnavy            = { type = 9 id = 72009 }
  chiefofair             = { type = 9 id = 72010 }

  landunit = {
    id       = { type = 25600 id = 1 }
    name     = "Xin'jiang Jüntuan 1"
    location = 1433
    division = {
      id             = { type = 25600 id = 2 }
      name           = "1 Xin'jiang Shi"
      type           = infantry
      model          = 6
      strength       = 40
    }
    division = {
      id             = { type = 25600 id = 3 }
      name           = "7 Xin'jiang Lü"
      type           = militia
      model          = 3
      strength       = 40
    }
    division = {
      id             = { type = 25600 id = 4 }
      name           = "8 Xin'jiang Lü"
      type           = militia
      model          = 3
      strength       = 40
    }
  }
}
