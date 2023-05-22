##############################
# Country definition for QUE #
##############################
province = {
  id = 574 # Québec
  landfort = 6
  coastalfort = 2
  anti_air = 3
  air_base = { size = 3 current_size = 3 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 585 anti_air = 2 } # Montréal

#####################
# Country main data #
#####################

country = {
  tag                = QUE
  puppet             = USA
  capital            = 574 # Québec
  manpower           = 50
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  transports     = 20

  diplomacy = {
    relation = { tag = USA value = 200 }
    relation = { tag = ENG value = -100 }
    relation = { tag = CSA value = -50 }
    relation = { tag = FRA value = -25 }
    relation = { tag = GER value = -50 }
    relation = { tag = HOL value = 25 }
    relation = { tag = IRE value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "CSA" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }

  nationalprovinces      = { 564 574 581 585 1909 2732 2733 2734 2735 2736 6605 6606 6607 6608 6609 6610 6611 6612 6613 6614 6615 6616 6617 6618 6619 6620 6621 6622 6623 6624 6625 6626 6627 6628 6629 6630 6631 6632 6633 6634 6635 6636 6637 6638 6639 6640 6641 6642 6643 6644 6645 6646 6655 6840 6841 6842 }
  ownedprovinces         = { 564 574 575 581 585 1909 2732 2733 2734 2735 2736 6605 6606 6607 6608 6609 6610 6611 6612 6613 6614 6615 6616 6617 6618 6619 6620 6621 6622 6623 6624 6625 6626 6627 6628 6629 6630 6631 6632 6633 6634 6635 6636 6637 6638 6639 6640 6641 6642 6643 6644 6645 6646 6647 6648 6649 6650 6651 6652 6653 6654 6655 6840 6841 6842 }
  controlledprovinces    = { 564 574 575 581 585 1909 2732 2733 2734 2735 2736 6605 6606 6607 6608 6609 6610 6611 6612 6613 6614 6615 6616 6617 6618 6619 6620 6621 6622 6623 6624 6625 6626 6627 6628 6629 6630 6631 6632 6633 6634 6635 6636 6637 6638 6639 6640 6641 6642 6643 6644 6645 6646 6647 6648 6649 6650 6651 6652 6653 6654 6655 6840 6841 6842 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 1970 1980 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 2800 2450 21180 21190 5700 5710 5010 5020 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5800 5080 5090 14000 14010 14020 5600 5610 5620 5630 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 1
    freedom           = 8
    free_market       = 8
    professional_army = 1
    defense_lobby     = 2
    interventionism   = 1
  }

  landunit = {
    id       = { type = 13502 id = 1 }
    name     = "Armée Québécois"
    location = 574
    division = {
      id             = { type = 13502 id = 2 }
      name           = "1ère Div. d'Inf. 'Montcalm'"
      type           = infantry
      model          = 5
      strength       = 50
    }
  }

  navalunit = {
    id       = { type = 13502 id = 3 }
    name     = "Marine Québécoise"
    location = 574
    base     = 574
    division = {
      id             = { type = 13502 id = 4 }
      name           = "NMQ Patrie"
      type           = light_cruiser
      model          = 1
    }
  }
}
