##############################
# Country definition for PER #
##############################
province = {
  id = 1497 # Gameroon
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = PER
  capital            = 1502 # Tehran
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = AFG value = 25 }
    relation = { tag = DEN value = 50 }
    relation = { tag = ENG value = 25 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = SAU value = 100 }
    relation = { tag = SOV value = -20 }
    relation = { tag = SWE value = 50 }
    relation = { tag = TUR value = -50 }
  }

  nationalprovinces      = { 1502 1789 1825 1497 1499 1826 1501 1500 1496 2836 2837 2842 2843 2844 4207 4208 4210 4211 4213 4214 4215 4216 4217 4218 4219 4220 4221 4223 4224 4227 4228 4229 4230 4231 4233 4234 6495 7014 2864 2865 5386 5389 1486 5388 5387 5379 5390 5400 2867 5401 5398 5396 5397 5399 5481 5484 3485 6953 1487 3484 3483 1485 3482 3481 }
  ownedprovinces         = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495 2836 2837 2838 2839 2840 2841 2842 2843 2844 2845 2846 4198 4199 4201 4202 4203 4204 4205 4206 4207 4208 4209 4210 4211 4212 4213 4214 4215 4216 4217 4218 4219 4220 4221 4222 4223 4224 4225 4226 4227 4228 4229 4230 4231 4232 4233 4234 6495 7014 }
  controlledprovinces    = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495 2836 2837 2838 2839 2840 2841 2842 2843 2844 2845 2846 4198 4199 4201 4202 4203 4204 4205 4206 4207 4208 4209 4210 4211 4212 4213 4214 4215 4216 4217 4218 4219 4220 4221 4222 4223 4224 4225 4226 4227 4228 4229 4230 4231 4232 4233 4234 6495 7014 }
  claimedprovinces       = { 1906 4232 2838 1503 4209 1787 4206 2840 4202 4201 4198 1788 4199 1859 4203 2839 4204 2841 4205 1498 4212 1495 4226 2846 4225 4222 2845 5384 5380 5392 1493 1484 2866 5402 3479 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 5600 1830 1840 13060 13070 13080 1310 1320 1330 1340 5700 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 53001 }
  headofgovernment       = { type = 9 id = 53002 }
  foreignminister        = { type = 9 id = 53003 }
  armamentminister       = { type = 9 id = 53004 }
  ministerofsecurity     = { type = 9 id = 53005 }
  ministerofintelligence = { type = 9 id = 53006 }
  chiefofstaff           = { type = 9 id = 53007 }
  chiefofarmy            = { type = 9 id = 53008 }
  chiefofnavy            = { type = 9 id = 53009 }
  chiefofair             = { type = 9 id = 53010 }

  landunit = {
    id       = { type = 16600 id = 1 }
    name     = "Lasgar Parsi"
    location = 1502
    division = {
      id             = { type = 16600 id = 2 }
      name           = "1. Dastebandi Sarbaze Piyade"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 5
    }
    division = {
      id             = { type = 16600 id = 3 }
      name           = "1. Dastebandi Savareh"
      type           = cavalry
      model          = 8
    }
  }
}
