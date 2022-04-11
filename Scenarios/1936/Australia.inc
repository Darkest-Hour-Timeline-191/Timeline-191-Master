##############################
# Country definition for AST #
##############################
province = {
  id = 1677 # Port Mosbi
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
}
province = {
  id = 1703 # Darwin
  anti_air = 5
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1712 # Bunbury
  coastalfort = 1
  anti_air = 5
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 1718 anti_air = 1 } # Adelaide
province = {
  id = 1722 # Brisbane
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1723 # Sydney
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 1724 coastalfort = 2 anti_air = 3 } # Wollongong
province = {
  id = 1727 # Canberra
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
}
province = { id = 1730 coastalfort = 1 anti_air = 3 } # Melbourne
province = { id = 1733 anti_air = 2 } # Mount Gambier
province = {
  id = 5856 # Samarai
  anti_air = 1
  air_base = { size = 1 current_size = 1 }
}

#####################
# Country main data #
#####################

country = {
  tag                = AST
  puppet             = ENG
  capital            = 1727 # Canberra
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 20
  escorts        = 1

  diplomacy = {
    relation = { tag = BEL value = 75 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 65 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = PHI value = 40 }
    relation = { tag = SAF value = 200 }
    relation = { tag = SAU value = 50 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }

  nationalprovinces      = { 1703 1704 1706 1707 1708 1709 1710 1711 1712 1713 1715 1716 1717 1718 1719 1722 1723 1724 1725 1727 1729 1730 1732 1733 1693 1696 1697 1698 1700 1702 2966 2967 2968 2969 2970 2971 2972 2973 2974 2975 2976 2977 2978 2979 2980 2981 2982 2983 2984 2985 2986 2987 2988 2989 5895 5896 5897 5898 5899 5900 5901 5902 5903 5904 5905 5906 5907 5908 5909 5910 5911 5912 5913 5914 5915 5916 5917 5918 5919 5920 5921 5922 5923 5924 5925 5926 5927 5928 5929 5930 5931 5932 5933 5934 5935 5936 5937 5938 5939 5940 5941 5942 5943 5944 5945 5946 5947 5948 5949 5950 5951 5952 5953 5954 5955 5956 5957 5958 5959 5960 5961 5962 5963 5964 5965 5966 5967 5968 5969 5970 5971 5972 5973 5974 5975 5976 5977 5978 5979 5980 5981 5982 5983 5984 5985 5986 5987 5988 5989 5990 5991 5992 5993 5994 5995 5996 5997 5998 5999 6000 6001 6002 6003 6004 6005 6006 6007 6008 6009 6010 6011 6012 6013 6014 6015 6016 6017 6018 6019 6020 6021 6022 6023 6024 6025 6026 6027 6028 6029 6030 6031 6032 6033 6034 6035 6036 6037 6038 6039 6040 6041 6042 6043 6044 6045 6046 6047 6048 6049 6050 6051 6052 6053 6054 6055 6056 6071 6088 }
  ownedprovinces         = { 1703 1704 1706 1707 1708 1709 1710 1711 1712 1713 1715 1716 1717 1718 1719 1722 1723 1724 1725 1727 1729 1730 1732 1733 1693 1696 1697 1698 1700 1702 1675 1677 1678 1679 1680 2966 2967 2968 2969 2970 2971 2972 2973 2974 2975 2976 2977 2978 2979 2980 2981 2982 2983 2984 2985 2986 2987 2988 2989 2990 3115 5853 5854 5855 5856 5857 5858 5895 5896 5897 5898 5899 5900 5901 5902 5903 5904 5905 5906 5907 5908 5909 5910 5911 5912 5913 5914 5915 5916 5917 5918 5919 5920 5921 5922 5923 5924 5925 5926 5927 5928 5929 5930 5931 5932 5933 5934 5935 5936 5937 5938 5939 5940 5941 5942 5943 5944 5945 5946 5947 5948 5949 5950 5951 5952 5953 5954 5955 5956 5957 5958 5959 5960 5961 5962 5963 5964 5965 5966 5967 5968 5969 5970 5971 5972 5973 5974 5975 5976 5977 5978 5979 5980 5981 5982 5983 5984 5985 5986 5987 5988 5989 5990 5991 5992 5993 5994 5995 5996 5997 5998 5999 6000 6001 6002 6003 6004 6005 6006 6007 6008 6009 6010 6011 6012 6013 6014 6015 6016 6017 6018 6019 6020 6021 6022 6023 6024 6025 6026 6027 6028 6029 6030 6031 6032 6033 6034 6035 6036 6037 6038 6039 6040 6041 6042 6043 6044 6045 6046 6047 6048 6049 6050 6051 6052 6053 6054 6055 6056 6071 6088 7222 }
  controlledprovinces    = { 1703 1704 1706 1707 1708 1709 1710 1711 1712 1713 1715 1716 1717 1718 1719 1722 1723 1724 1725 1727 1729 1730 1732 1733 1693 1696 1697 1698 1700 1702 1675 1677 1678 1679 1680 2966 2967 2968 2969 2970 2971 2972 2973 2974 2975 2976 2977 2978 2979 2980 2981 2982 2983 2984 2985 2986 2987 2988 2989 2990 3115 5853 5854 5855 5856 5857 5858 5895 5896 5897 5898 5899 5900 5901 5902 5903 5904 5905 5906 5907 5908 5909 5910 5911 5912 5913 5914 5915 5916 5917 5918 5919 5920 5921 5922 5923 5924 5925 5926 5927 5928 5929 5930 5931 5932 5933 5934 5935 5936 5937 5938 5939 5940 5941 5942 5943 5944 5945 5946 5947 5948 5949 5950 5951 5952 5953 5954 5955 5956 5957 5958 5959 5960 5961 5962 5963 5964 5965 5966 5967 5968 5969 5970 5971 5972 5973 5974 5975 5976 5977 5978 5979 5980 5981 5982 5983 5984 5985 5986 5987 5988 5989 5990 5991 5992 5993 5994 5995 5996 5997 5998 5999 6000 6001 6002 6003 6004 6005 6006 6007 6008 6009 6010 6011 6012 6013 6014 6015 6016 6017 6018 6019 6020 6021 6022 6023 6024 6025 6026 6027 6028 6029 6030 6031 6032 6033 6034 6035 6036 6037 6038 6039 6040 6041 6042 6043 6044 6045 6046 6047 6048 6049 6050 6051 6052 6053 6054 6055 6056 6071 6088 7222 }
  claimedprovinces       = { 5856 1672 5862 1667 1666 3113 3114 5861 5859 1681 5860 3112 5855 1677 1680 5853 1678 5854 1675 1679 5858 3115 5857 1682 5865 5866 1669 1670 5864 1671 5863 1668 5867 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 14000 14010 14020 7600 7610 2620 2010 2630 2860 2870 2880 2020 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 1830 1840 1850 1860 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3210 3220 3230 3240 3250 3310 3320 3330 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 5700 5710 5010 5020 5810 5820 5050 5830 5060 5800 5080 5090 5310 54010 54020 54030 5316 5326 1910 1920 1930 1940 1950 1960 1970 4300 4310 4320 4330 4800 4810 4820 4740 4750 4760 3720 3730 3736 3740 3900 3810 5600 5610 5620 5630 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 6030 8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8210 8500 8510 8520 8600 8900 8910 8920 8930 8940 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9140 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 1
    freedom           = 10
    free_market       = 8
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 56001 }
  headofgovernment       = { type = 9 id = 56002 }
  foreignminister        = { type = 9 id = 56003 }
  armamentminister       = { type = 9 id = 56004 }
  ministerofsecurity     = { type = 9 id = 56005 }
  ministerofintelligence = { type = 9 id = 56006 }
  chiefofstaff           = { type = 9 id = 56007 }
  chiefofarmy            = { type = 9 id = 56008 }
  chiefofnavy            = { type = 9 id = 56009 }
  chiefofair             = { type = 9 id = 56010 }

  landunit = {
    id       = { type = 30001 id = 1 }
    name     = "2nd Military District"
    location = 1727
    division = {
      id             = { type = 30001 id = 2 }
      name           = "1st Infantry Division"
      type           = garrison
      model          = 3
      strength       = 5
    }
    division = {
      id             = { type = 30001 id = 3 }
      name           = "2nd Infantry Division"
      type           = garrison
      model          = 3
      strength       = 5
    }
    division = {
      id             = { type = 30001 id = 4 }
      name           = "1st Cavalry Division"
      type           = cavalry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 30001 id = 5 }
    name     = "3rd Military District"
    location = 1727
    division = {
      id             = { type = 30001 id = 6 }
      name           = "3rd Infantry Division"
      type           = garrison
      model          = 3
      strength       = 5
    }
    division = {
      id             = { type = 30001 id = 7 }
      name           = "4th Infantry Division"
      type           = garrison
      model          = 3
      strength       = 5
    }
    division = {
      id             = { type = 30001 id = 8 }
      name           = "2nd Cavalry Division"
      type           = cavalry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 30001 id = 9 }
    name     = "2nd Australian Imperial Force"
    location = 1727
    division = {
      id             = { type = 30001 id = 10 }
      name           = "6th Australian Infantry Division"
      type           = infantry
      model          = 7
      strength       = 5
    }
  }

  navalunit = {
    id       = { type = 10500 id = 17 }
    name     = "HM Australian Fleet"
    location = 1723
    base     = 1723
    division = {
      id             = { type = 12700 id = 2020 }
      name           = "HMAS Albatross"
      type           = escort_carrier
      model          = 0
    }
    division = {
      id             = { type = 10500 id = 18 }
      name           = "HMAS Australia"
      type           = heavy_cruiser
      model          = 4
    }
    division = {
      id             = { type = 10500 id = 19 }
      name           = "HMAS Canberra"
      type           = heavy_cruiser
      model          = 4
    }
    division = {
      id             = { type = 10500 id = 20 }
      name           = "HMAS Sydney"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 10500 id = 25 }
      name           = "HMAS Adelaide"
      type           = light_cruiser
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 10500 id = 22 }
    name     = "Transport Flotilla"
    location = 1723
    base     = 1723
    division = {
      id             = { type = 10500 id = 23 }
      name           = "HMAS Kanimbla Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10500 id = 29 }
      name           = "1st Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10500 id = 30 }
      name           = "2nd Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10500 id = 34 }
      name           = "6th Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10500 id = 2290 }
      name           = "1st Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 10500 id = 24 }
    name     = "HM Australian Reserve Fleet"
    location = 1723
    base     = 1723
    division = {
      id             = { type = 10500 id = 31 }
      name           = "3rd Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10500 id = 32 }
      name           = "4th Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10500 id = 2294 }
      name           = "2nd Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 10500 id = 33 }
      name           = "5th Transport Flotilla"
      type           = transport
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 10500 id = 15 }
    name     = "No.1 RAAF Tactical Bomber Group"
    location = 1723
    base     = 1723
    division = {
      id             = { type = 10500 id = 16 }
      name           = "No.1 RAAF Tactical Bomber Group"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
  }

  division_development = {
    id             = { type = 10500 id = 101 }
    name           = "HMAS Perth"
    type           = light_cruiser
    model          = 5
    cost           = 0.1
    new_model      = no
    date           = { year = 1936 month = january day = 13 }
  }

  landdivision = { dormant = yes id = { type = 30001 id = 1001 } name = "1. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
}
