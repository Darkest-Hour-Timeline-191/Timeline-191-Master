##############################
# Country definition for TIB #
##############################

country = {
  tag                = TIB
  capital            = 1452 # Lhasa
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  nationalprovinces      = { 1283 1448 1450 1451 1452 1453 1406 1444 1442 5205 1878 1877 5505 5506 5507 5508 5509 5510 5511 5512 5513 5514 5515 5516 5517 5518 5519 5520 5521 5522 5523 5524 5525 5526 5527 5528 5529 5530 5531 5532 5533 5534 5535 5536 5537 5538 5539 5540 5577 5578 5579 5580 5581 5582 5583 5584 5585 5586 5587 5588 5589 5602 5603 5550 5557 5556 1430 2835 5337 5336 5255 6922 6923 2043 5180 1455 7304 }
  ownedprovinces         = { 1283 1448 1450 1451 1452 1453 1406 5505 5506 5507 5508 5509 5510 5511 5512 5513 5514 5515 5516 5517 5518 5519 5520 5521 5522 5523 5524 5525 5526 }
  controlledprovinces    = { 1283 1448 1450 1451 1452 1453 1406 5505 5506 5507 5508 5509 5510 5511 5512 5513 5514 5515 5516 5517 5518 5519 5520 5521 5522 5523 5524 5525 5526 }
  claimedprovinces       = { 5488 5491 1443 }

  techapps               = { 5800 5316 5326 1010 1020 1030 1040 1160 1170 1180 1190 1200 1210 13060 13070 13080 1310 1910 1920 1930 2290 14000 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 }
  blueprints             = { 5600 2300 1050 1060 1220 6540 6910 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 5
    free_market       = 5
    professional_army = 2
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 73001 }
  headofgovernment       = { type = 9 id = 73002 }
  foreignminister        = { type = 9 id = 73003 }
  armamentminister       = { type = 9 id = 73004 }
  ministerofsecurity     = { type = 9 id = 73005 }
  ministerofintelligence = { type = 9 id = 73006 }
  chiefofstaff           = { type = 9 id = 73007 }
  chiefofarmy            = { type = 9 id = 73008 }
  chiefofnavy            = { type = 9 id = 73009 }
  chiefofair             = { type = 9 id = 73010 }

  landunit = {
    id       = { type = 10700 id = 1 }
    name     = "Xi'zang Jüntuan 1"
    location = 1452
    division = {
      id             = { type = 10700 id = 2 }
      name           = "1 Xi'zang Shi"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10700 id = 3 }
      name           = "10 Xi'zang Lü"
      type           = militia
      model          = 3
      strength       = 20
    }
    division = {
      id             = { type = 10700 id = 4 }
      name           = "17 Xi'zang Lü"
      type           = militia
      model          = 3
      strength       = 20
    }
  }
}
