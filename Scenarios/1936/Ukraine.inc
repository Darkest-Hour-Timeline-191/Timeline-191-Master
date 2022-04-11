##############################
# Country definition for UKR #
##############################
province = { id = 161 landfort = 1 } # Kamianets-Podilskyi
province = { id = 226 landfort = 2 } # Novograd-Volinskij
province = {
  id = 227 # Zitomir
  air_base = { size = 1 current_size = 1 }
}
province = {
  id = 233 # Odesa
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 234 # Mikolaiv
  naval_base = { size = 4 current_size = 4 }
}
province = {
  id = 236 # Yelisavetgrad
  air_base = { size = 2 current_size = 2 }
}
province = {
  id = 238 # Kiiv
  anti_air = 3
  air_base = { size = 8 current_size = 8 }
}
province = { id = 246 anti_air = 2 } # Poltava
province = {
  id = 248 # Harkiv
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
}
province = {
  id = 249 # Zaporizzâ
  air_base = { size = 2 current_size = 2 }
}
province = {
  id = 253 # Sevastopol'
  landfort = 3
  coastalfort = 5
  anti_air = 6
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 258 # Mariupol'
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}
province = { id = 267 landfort = 2 } # Proskuriv
province = {
  id = 1827 # Dzankoy
  air_base = { size = 2 current_size = 2 }
}
province = { id = 3406 landfort = 1 } # Ovruch

#####################
# Country main data #
#####################

country = {
  tag                = UKR
  puppet             = GER
  control            = GER
  capital            = 238 # Kiiv
  manpower           = 50
  # Resource Reserves
  energy         = 800
  metal          = 800
  rare_materials = 400
  oil            = 400
  supplies       = 400
  money          = 20

  diplomacy = {
    relation = { tag = GER value = 200 }
  }

  nationalprovinces      = { 238 227 3407 237 1154 228 236 3408 234 235 251 3410 3409 3411 3412 252 1827 253 155 254 250 249 3413 258 3422 3414 260 3415 1152 259 3423 246 248 245 3420 3419 226 240 7067 3406 241 239 3421 244 266 3416 3417 267 161 231 3405 232 3404 233 1565 1571 502 506 1885 3395 3274 242 3418 }
  ownedprovinces         = { 238 227 3407 237 1154 228 236 3408 234 235 251 3410 3409 3411 3412 252 1827 253 155 254 250 249 3413 258 3422 3414 260 3415 1152 259 3423 246 248 245 3420 3419 226 240 7067 3406 241 239 3421 244 266 3416 3417 267 161 231 3405 232 3404 233 1565 1571 242 3418 }
  controlledprovinces    = { 238 227 3407 237 1154 228 236 3408 234 235 251 3410 3409 3411 3412 252 1827 253 155 254 250 249 3413 258 3422 3414 260 3415 1152 259 3423 246 248 245 3420 3419 226 240 7067 3406 241 239 3421 244 266 3416 3417 267 161 231 3405 232 3404 233 1565 1571 242 3418 }

  policy = {
    democratic        = 8
    political_left    = 3
    freedom           = 7
    free_market       = 7
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 5
  }
  headofstate            = { type = 6 id = 545170 } # H.M. Pavlo Skoropadsky
  headofgovernment       = { type = 6 id = 545016 } # Omelyan Senyk
}
