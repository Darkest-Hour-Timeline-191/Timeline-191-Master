##############################
# Country definition for PHI #
##############################
province = {
  id = 1737 # Maynila
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 8 current_size = 8 }
}
province = {
  id = 1739 # Angeles
  anti_air = 4
  air_base = { size = 5 current_size = 5 }
  naval_base = { size = 2 current_size = 2 }
}

#####################
# Country main data #
#####################

country = {
  tag                = PHI
  puppet             = USA
  control            = USA
  capital            = 1737 # Maynila
  manpower           = 200
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 200
  oil            = 200
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = AST value = 40 }
    relation = { tag = JAP value = 1 }
    relation = { tag = LIB value = 200 }
    relation = { tag = NZL value = 25 }
    relation = { tag = USA value = 200 }
  }

  nationalprovinces      = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 5715 5716 5717 5718 5719 5720 5721 5722 5723 5724 5725 5726 5727 5728 5729 5730 5731 5732 5733 1647 5744 5745 5746 7991 }
  ownedprovinces         = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 5715 5716 5717 5718 5719 5720 5721 5722 5723 5724 5725 5726 5727 5728 5729 5730 5731 5732 5733 }
  controlledprovinces    = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 5715 5716 5717 5718 5719 5720 5721 5722 5723 5724 5725 5726 5727 5728 5729 5730 5731 5732 5733 }
  claimedprovinces       = { 5836 5891 5873 5892 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 5700 1910 1920 1930 1940 1950 1960 1830 5800 5080 5090 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 4
    free_market       = 5
    professional_army = 1
    defense_lobby     = 3
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 325001 } # Manuel Quezon
  headofgovernment       = { type = 9 id = 325002 } # Sergio Osmeña
  foreignminister        = { type = 9 id = 325003 } # Quintin Paredes
  armamentminister       = { type = 9 id = 325004 } # Elpidio Quirino
  ministerofsecurity     = { type = 9 id = 325005 } # Jose Yulo
  ministerofintelligence = { type = 9 id = 325006 } # Benito N. Ebuen
  chiefofstaff           = { type = 9 id = 325007 } # Paulino Santos
  chiefofarmy            = { type = 9 id = 325008 } # Leoncio S. Tan
  chiefofnavy            = { type = 9 id = 325009 } # Santiago Nuval
  chiefofair             = { type = 9 id = 325010 } # Pelagio Cruz

  landunit = {
    id       = { type = 11804 id = 1 }
    name     = "Manila Garrison"
    location = 1737
    division = {
      id             = { type = 11804 id = 2 }
      name           = "Philippines Constabulary"
      type           = garrison
      model          = 3
      strength       = 30
    }
  }
}
