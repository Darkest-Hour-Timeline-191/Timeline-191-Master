##############################
# Country definition for MON #
##############################
province = {
  id = 1404 # Urga
  air_base = { size = 1 current_size = 1 }
}

#####################
# Country main data #
#####################

country = {
  tag                = MON
  capital            = 1404 # Urga
  manpower           = 200
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 200
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = CHC value = 25 }
    relation = { tag = MON value = 150 }
  }
  SpyInfo                = { country = "RUS" NumberOfSpies = 3 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 1 }
  SpyInfo                = { country = "MAN" NumberOfSpies = 1 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 1 }

  nationalprovinces      = { 1404 1420 1419 1434 1438 1385 1207 1208 1398 1386 1439 1273 1272 1388 2337 2246 1382 3762 3763 3764 3765 3766 3767 3768 3769 3770 3771 3772 3773 3755 3756 3757 3758 3759 3760 3594 3595 3761 3750 3751 3752 3753 3754 1418 5472 5473 5474 5475 5476 5477 5478 5479 5480 3740 1421 5502 3741 3744 5493 5537 5528 5542 5541 5622 5624 5625 5623 5631 5632 5628 5629 5630 2318 1397 2317 2348 2344 5636 5635 5633 5658 5657 5681 1387 5677 5680 5676 5675 1380 5661 5660 5665 5664 5662 5663 5659 7917 7918 }
  ownedprovinces         = { 1404 1420 1419 1434 1438 1385 3762 3763 3764 3765 3766 3767 3768 3769 3771 3772 3773 5476 5477 5478 5479 5480 5472 5473 7917 7918 }
  controlledprovinces    = { 1404 1420 1419 1434 1438 1385 3762 3763 3764 3765 3766 3767 3768 3769 3771 3772 3773 5476 5477 5478 5479 5480 5472 5473 7917 7918 }
  claimedprovinces       = { 5497 5504 5503 3742 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 1070 1910 1920 1930 1940 1950 1960 1970 13060 13070 13080 1310 1320 1330 1340 5700 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 7
    freedom           = 5
    free_market       = 3
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 94001 }
  headofgovernment       = { type = 9 id = 94002 }
  foreignminister        = { type = 9 id = 94003 }
  armamentminister       = { type = 9 id = 94004 }
  ministerofsecurity     = { type = 9 id = 94005 }
  ministerofintelligence = { type = 9 id = 94006 }
  chiefofstaff           = { type = 9 id = 94007 }
  chiefofarmy            = { type = 9 id = 94008 }
  chiefofnavy            = { type = 9 id = 94009 }
  chiefofair             = { type = 9 id = 94010 }

  landunit = {
    id       = { type = 30500 id = 1 }
    name     = "Armija Mongol Nayramdakh"
    location = 1404
    division = {
      id             = { type = 30500 id = 3 }
      name           = "2. Nayramdakh Kavaleriyskaya Div."
      type           = cavalry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 30500 id = 4 }
      name           = "3. Nayramdakh Opolcheniya Div."
      type           = militia
      model          = 3
      strength       = 10
    }
    division = {
      id             = { type = 30500 id = 5 }
      name           = "4. Nayramdakh Opolcheniya Div."
      type           = militia
      model          = 3
      strength       = 10
    }
  }
}
