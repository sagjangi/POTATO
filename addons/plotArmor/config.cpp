#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "SagJangi";
        authorUrl = "https://steamcommunity.com/sharedfiles/filedetails/?id=2075156290";
        units[] = {};
        weapons[] = {"PLOT_ARMOR_V_Pockets_F","PLOT_ARMOR_V_BandollierB","PLOT_ARMOR_V_BandollierB_ghex_F","PLOT_ARMOR_V_BandollierB_blk","PLOT_ARMOR_V_BandollierB_cbr","PLOT_ARMOR_V_BandollierB_khk","PLOT_ARMOR_V_BandollierB_oli","PLOT_ARMOR_V_TacChestrig_grn_F","PLOT_ARMOR_V_TacChestrig_cbr_F","PLOT_ARMOR_V_TacChestrig_oli_F","PLOT_ARMOR_V_Chestrig","PLOT_ARMOR_V_Chestrig_blk","PLOT_ARMOR_V_Chestrig_khk","PLOT_ARMOR_V_Chestrig_oli","PLOT_ARMOR_V_HarnessO_brn","PLOT_ARMOR_V_HarnessOGL_brn","PLOT_ARMOR_V_HarnessOGL_gry","PLOT_ARMOR_V_HarnessO_gry","PLOT_ARMOR_V_HarnessOGL_ghex_F","PLOT_ARMOR_V_HarnessO_ghex_F","PLOT_ARMOR_H_No_Hat","PLOT_ARMOR_H_Cap_oli","PLOT_ARMOR_H_Cap_tan","PLOT_ARMOR_H_Cap_grn","PLOT_ARMOR_H_Bandanna_cbr","PLOT_ARMOR_H_Bandanna_khk","PLOT_ARMOR_H_Bandanna_sand","PLOT_ARMOR_H_Booniehat_khk","PLOT_ARMOR_H_Booniehat_oli","PLOT_ARMOR_H_Booniehat_tan","PLOT_ARMOR_H_Shemag_olive","PLOT_ARMOR_H_ShemagOpen_khk","PLOT_ARMOR_H_ShemagOpen_tan","PLOT_ARMOR_H_3holeBalaclava","PLOT_ARMOR_H_Cap_headphones","PLOT_ARMOR_H_Cap_oli_hs","PLOT_ARMOR_H_Booniehat_khk_hs","PLOT_ARMOR_H_Bandanna_khk_hs","PLOT_ARMOR_H_Watchcap_blk","PLOT_ARMOR_H_Shemag_olive_hs","PLOT_ARMOR_H_Cap_brn_SPECOPS","PLOT_ARMOR_H_Cap_police","PLOT_ARMOR_H_Cap_usblack","PLOT_ARMOR_H_Cap_tan_specops_US","PLOT_ARMOR_H_Cap_blk_Raven","PLOT_ARMOR_H_Booniehat_dgtl","PLOT_ARMOR_H_Booniehat_mcamo","PLOT_ARMOR_H_Bandanna_mcamo","PLOT_ARMOR_H_MilCap_blue","PLOT_ARMOR_H_MilCap_gry","PLOT_ARMOR_H_MilCap_mcamo","PLOT_ARMOR_H_MilCap_dgtl","PLOT_ARMOR_H_MilCap_gen_F","PLOT_ARMOR_H_MilCap_ghex_F","PLOT_ARMOR_H_MilCap_tna_F"};
        requiredAddons[] = {"potato_core"};
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class V_BandollierB_khk;
    class V_BandollierB_blk: V_BandollierB_khk { 
        class ItemInfo;
    };
    class PLOT_ARMOR_V_Pockets_F: V_BandollierB_blk {
        author = "SagJangi";
        displayName = "PLOT ARMOR Pockets (Invisible Prop)";
        class ItemInfo: ItemInfo {
            uniformModel = "";
        };
    };
    class Vest_Camo_Base;
    class V_PlateCarrier1_blk: Vest_Camo_Base { 
        class ItemInfo;
    };
    class PLOT_ARMOR_V_BandollierB: V_PlateCarrier1_blk {
        author = "SagJangi";
        _generalMacro = "V_BandollierB_rgr (Green)";
        displayName = "PLOT ARMOR Slash Bandollier";
        picture = "\A3\Characters_F_Beta\Data\ui\icon_V_Bandolier_oli_ca.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
        };
    };
    class PLOT_ARMOR_V_BandollierB_ghex_F: V_PlateCarrier1_blk {
        author = "SagJangi";
        _generalMacro = "V_BandollierB_ghex_F";
        displayName = "PLOT ARMOR Slash Bandolier (Green Hex)";
        picture = "\A3\Characters_F_Exp\Data\UI\icon_V_BandollierB_ghex_F_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\bandolier_ghex_co.paa"};
        class ItemInfo: ItemInfo {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
        };
    };
    class PLOT_ARMOR_V_BandollierB_blk: V_PlateCarrier1_blk {
        author = "SagJangi";
        _generalMacro = "V_BandollierB_blk";
        displayName = "PLOT ARMOR Slash Bandolier (Black)";
        picture = "\A3\Characters_F\Data\UI\icon_V_BandollierB_blk_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
        };
    };
















class PLOT_ARMOR_V_BandollierB_cbr: V_PlateCarrier1_blk {
    author = "SagJangi";
    _generalMacro = "V_BandollierB_cbr";
    displayName = "PLOT ARMOR Slash Bandolier (Coyote)";
    picture = "\A3\Characters_F\Data\UI\icon_V_BandollierB_cbr_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
    };
};
class PLOT_ARMOR_V_BandollierB_khk: V_PlateCarrier1_blk {
    author = "SagJangi";
    _generalMacro = "V_BandollierB_khk";
    displayName = "PLOT ARMOR Slash Bandolier (Khaki)";
    picture = "\A3\Characters_F\Data\UI\icon_V_BandollierB_khk_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
    };
};
class PLOT_ARMOR_V_BandollierB_oli: V_PlateCarrier1_blk {
    author = "SagJangi";
    _generalMacro = "V_BandollierB_oli";
    displayName = "PLOT ARMOR Slash Bandolier (Olive)";
    picture = "\A3\Characters_F_Beta\Data\ui\icon_V_Bandolier_oli_ca.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_oli_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
    };
};	











    class PLOT_ARMOR_V_TacChestrig_grn_F: V_PlateCarrier1_blk {
        author = "SagJangi";
        _generalMacro = "V_TacChestrig_grn_F";
        displayName = "PLOT ARMOR Tactical Chest Rig (Green)";
        picture = "\A3\Characters_F_Exp\Data\UI\icon_V_TacChestrig_grn_ca.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Common\Data\equip_TacChestrig_grn_co.paa"};
        class ItemInfo: ItemInfo {
            uniformModel = "\A3\Characters_F_Exp\Common\equip_TacChestrig.p3d";
        };
    };
    class PLOT_ARMOR_V_TacChestrig_cbr_F: V_PlateCarrier1_blk {
        author = "SagJangi";
        _generalMacro = "V_TacChestrig_cbr_F";
        displayName = "PLOT ARMOR Tactical Chest Rig (Coyote)";
        picture = "\A3\Characters_F_Exp\Data\UI\icon_V_TacChestrig_cbr_F_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Civil\Data\chestrig_cbr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformModel = "\A3\Characters_F_Exp\Civil\equip_t_chestrig_01.p3d";
        };
    };
class PLOT_ARMOR_V_TacChestrig_oli_F: V_PlateCarrier1_blk {
    author = "SagJangi";
    _generalMacro = "V_TacChestrig_oli_F";
    displayName = "PLOT ARMOR Tactical Chest Rig (Olive)";
    picture = "\A3\Characters_F_Exp\Data\UI\icon_V_TacChestrig_oli_F_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Civil\Data\chestrig_oli_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F_Exp\Civil\equip_t_chestrig_01.p3d";
    };
};




    class PLOT_ARMOR_V_Chestrig: V_PlateCarrier1_blk {
        author = "SagJangi";
        _generalMacro = "V_Chestrig_rgr";
        displayName = "PLOT ARMOR Chest Rig (Green)";
        picture = "\A3\characters_f\Data\UI\icon_V_Chestrig_rgr_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_rgr_co.paa","\A3\Characters_f\BLUFOR\data\armor1_co.paa"};
        class ItemInfo: ItemInfo {
            uniformModel = "\A3\Characters_F\Common\equip_chestrig.p3d";
        };
    };










        class PLOT_ARMOR_V_Chestrig_blk: V_PlateCarrier1_blk {
    author = "SagJangi";
    _generalMacro = "V_Chestrig_blk";
    displayName = "PLOT ARMOR Chest Rig (Black)";
    picture = "\A3\Characters_F\Data\UI\icon_V_Chestrig_blk_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\chestrig_blk_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\equip_chestrig.p3d";
    };
};
class PLOT_ARMOR_V_Chestrig_khk: V_PlateCarrier1_blk {
    author = "SagJangi";
    _generalMacro = "V_Chestrig_khk";
    displayName = "PLOT ARMOR Chest Rig (Khaki)";
    picture = "\A3\Characters_F\Data\UI\icon_V_Chestrig_khk_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\chestrig_khk_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\equip_chestrig.p3d";
    };
};
class PLOT_ARMOR_V_Chestrig_oli: V_PlateCarrier1_blk {
    author = "SagJangi";
    _generalMacro = "V_Chestrig_oli";
    displayName = "PLOT ARMOR Chest Rig (Olive)";
    picture = "\A3\Characters_F\Data\UI\icon_V_Chestrig_oli_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\chestrig_oli_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\equip_chestrig.p3d";
    };
};






    class PLOT_ARMOR_V_HarnessO_brn: V_PlateCarrier1_blk {
        author = "SagJangi";
        _generalMacro = "V_HarnessO_brn";
        displayName = "PLOT ARMOR LBV Harness (Brown)";
        picture = "\A3\characters_f\Data\UI\icon_V_HarnessO_brn_CA.paa";
        class ItemInfo: ItemInfo {
            uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
        };
    };
    class PLOT_ARMOR_V_HarnessOGL_brn: V_PlateCarrier1_blk {
        author = "SagJangi";
        _generalMacro = "V_HarnessOGL_brn";
        displayName = "PLOT ARMOR LBV Grenadier Harness (Brown)";
        picture = "\A3\characters_f\Data\UI\icon_V_HarnessOGL_brn_CA.paa";
        class ItemInfo: ItemInfo {
            uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest_gl";
        };
    };
    class PLOT_ARMOR_V_HarnessOGL_gry: V_PlateCarrier1_blk {
    author = "SagJangi";
    _generalMacro = "V_HarnessOGL_gry";
    displayName = "PLOT ARMOR LBV Harness OGL (Grey)";
    picture = "\A3\Characters_F\Data\UI\icon_V_HarnessOGL_gry_CA.paa";
    hiddenSelectionsTextures[] = {
        "\A3\Characters_F\OPFOR\Data\clothing_gry_co.paa",
        "\A3\Characters_F\OPFOR\Data\tech_gry_co.paa"
    };
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest02.p3d";
    };
};

class PLOT_ARMOR_V_HarnessO_gry: V_PlateCarrier1_blk {
    author = "SagJangi";
    _generalMacro = "V_HarnessO_gry";
    displayName = "PLOT ARMOR LBV Harness (Grey)";
    picture = "\A3\Characters_F\Data\UI\icon_V_HarnessO_gry_CA.paa";
    hiddenSelectionsTextures[] = {
        "\A3\Characters_F\OPFOR\Data\clothing_gry_co.paa",
        "\A3\Characters_F\OPFOR\Data\tech_gry_co.paa"
    };
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01.p3d";
    };
};

class PLOT_ARMOR_V_HarnessOGL_ghex_F: V_PlateCarrier1_blk {
    author = "SagJangi";
    _generalMacro = "V_HarnessOGL_ghex_F";
    displayName = "PLOT ARMOR LBV Harness OGL (Green Hex)";
    picture = "\A3\Characters_F_Exp\Data\UI\icon_V_HarnessOGL_ghex_F_CA.paa";
    hiddenSelectionsTextures[] = {
        "\A3\Characters_F_Exp\OPFOR\Data\clothing_ghex_co.paa",
        "\A3\Characters_F_Exp\OPFOR\Data\tech_ghex_co.paa"
    };
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest02.p3d";
    };
};

class PLOT_ARMOR_V_HarnessO_ghex_F: V_PlateCarrier1_blk {
    author = "SagJangi";
    _generalMacro = "V_HarnessO_ghex_F";
    displayName = "PLOT ARMOR LBV Harness (Green Hex)";
    picture = "\A3\Characters_F_Exp\Data\UI\icon_V_HarnessO_ghex_F_CA.paa";
    hiddenSelectionsTextures[] = {
        "\A3\Characters_F_Exp\OPFOR\Data\clothing_ghex_co.paa",
        "\A3\Characters_F_Exp\OPFOR\Data\tech_ghex_co.paa"
    };
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01.p3d";
    };
};









    class H_HelmetB;
    class H_HelmetIA: H_HelmetB {
        class ItemInfo;
    };
    class PLOT_ARMOR_H_No_Hat: H_HelmetIA {
        author = "SagJangi";
        _generalMacro = "H_Cap_oli";
        displayName = "PLOT ARMOR No Hat (Invisable Prop)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_oli_ca.paa";
        class ItemInfo: ItemInfo {
            uniformModel = "";
        };
    };
    class PLOT_ARMOR_H_Cap_oli: H_HelmetIA {
        author = "SagJangi";
        _generalMacro = "H_Cap_oli";
        displayName = "PLOT ARMOR Cap (Olive)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_oli_ca.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\capb_olive_co.paa"};
        class ItemInfo: ItemInfo {
            uniformModel = "\A3\Characters_F\common\capb.p3d";
        };
    };
    class PLOT_ARMOR_H_Cap_tan: PLOT_ARMOR_H_Cap_oli {
        author = "SagJangi";
        _generalMacro = "H_Cap_tan";
        displayName = "PLOT ARMOR Cap (Tan)";
        picture = "\A3\characters_f\Data\UI\icon_H_Cap_tan_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\capb_tan_co.paa"};
    };
    class PLOT_ARMOR_H_Cap_grn: PLOT_ARMOR_H_Cap_oli {
        author = "SagJangi";
        _generalMacro = "H_Cap_grn";
        displayName = "PLOT ARMOR Cap (Green)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_grn_ca.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\capb_green_co.paa"};
    };
    class PLOT_ARMOR_H_Bandanna_cbr: H_HelmetIA {
        author = "SagJangi";
        _generalMacro = "H_Bandanna_cbr";
        displayName = "PLOT ARMOR Bandana (Coyote)";
        picture = "\A3\characters_f\Data\UI\icon_H_Bandanna_cbr_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_bandana_cbr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformModel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
        };
    };
    class PLOT_ARMOR_H_Bandanna_khk: PLOT_ARMOR_H_Bandanna_cbr {
        author = "SagJangi";
        _generalMacro = "H_Bandanna_khk";
        displayName = "PLOT ARMOR Bandana (Khaki)";
        picture = "\A3\characters_f\Data\UI\icon_H_Bandanna_khk_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_bandana_khk_co.paa"};
    };
    class PLOT_ARMOR_H_Bandanna_sand: PLOT_ARMOR_H_Bandanna_cbr    {
        author = "SagJangi";
        _generalMacro = "H_Bandanna_sand";
        displayName = "PLOT ARMOR Bandana (Sand)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Bandanna_sand_ca.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_bandana_sand_co.paa"};
    };
    class PLOT_ARMOR_H_Booniehat_khk: H_HelmetIA {
        author = "SagJangi";
        _generalMacro = "H_Booniehat_khk";
        displayName = "PLOT ARMOR Boonie Hat (Khaki)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\booniehat_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformModel = "\A3\Characters_F\Common\booniehat";
        };
    };
    class PLOT_ARMOR_H_Booniehat_oli: PLOT_ARMOR_H_Booniehat_khk {
        author = "SagJangi";
        _generalMacro = "H_Booniehat_oli";
        displayName = "PLOT ARMOR Boonie Hat (Olive)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Booniehat_oli_ca.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\booniehat_grn_co.paa"};
    };
    class PLOT_ARMOR_H_Booniehat_tan: PLOT_ARMOR_H_Booniehat_khk {
        author = "SagJangi";
        _generalMacro = "H_Booniehat_tan";
        displayName = "PLOT ARMOR Boonie Hat (Tan)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Booniehat_tan_ca.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\booniehat_tan_co.paa"};
    };
    class PLOT_ARMOR_H_Shemag_olive: H_HelmetIA {
        author = "SagJangi";
        _generalMacro = "H_Shemag_olive";
        displayName = "PLOT ARMOR Shemag (Olive)";
        picture = "\A3\characters_F_Gamma\Guerrilla\Data\ui\icon_H_Shemag_olive_ca.paa";
        hiddenSelectionsTextures[] = {"\A3\characters_F_Gamma\Guerrilla\Data\h_shemag_olive_co.paa"};
        class ItemInfo: ItemInfo {
            uniformModel = "\A3\Characters_F_gamma\Guerrilla\headgear_shemagmask";
        };
    };
    class PLOT_ARMOR_H_ShemagOpen_khk: PLOT_ARMOR_H_Shemag_olive {
        author = "SagJangi";
        _generalMacro = "H_ShemagOpen_khk";
        displayName = "PLOT ARMOR Shemag (White)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_ShemagOpen_khk_ca.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_shemag_basic_co.paa"};
    };
    class PLOT_ARMOR_H_ShemagOpen_tan: PLOT_ARMOR_H_Shemag_olive {
        author = "SagJangi";
        _generalMacro = "H_ShemagOpen_Tan";
        displayName = "PLOT ARMOR Shemag (Tan)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_ShemagOpen_khk_ca.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_shemag_brn_co.paa"};
    };
    class PLOT_ARMOR_H_3holeBalaclava: H_HelmetIA {
        author = "Chesheire";
        displayName = "PLOT ARMOR 3-hole Balaclava (Black)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_blk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformModel = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        };
    };
            class PLOT_ARMOR_H_Cap_headphones: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_Cap_headphones";
    displayName = "PLOT ARMOR Cap (Headphones)";
    picture = "\A3\Characters_F\Data\UI\icon_H_Cap_headphones_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\cap_headphones_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_cap_headphones.p3d";
    };
};

class PLOT_ARMOR_H_Cap_oli_hs: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_Cap_oli_hs";
    displayName = "PLOT ARMOR Cap (Headset)";
    picture = "\A3\Characters_F\Data\UI\icon_H_Cap_oli_hs_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\cap_oli_hs_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_cap_headphones.p3d";
    };
};

class PLOT_ARMOR_H_Booniehat_khk_hs: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_Booniehat_khk_hs";
    displayName = "PLOT ARMOR Booniehat (Headset)";
    picture = "\A3\Characters_F\Data\UI\icon_H_Booniehat_khk_hs_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\booniehat_khk_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_booniehat_hs.p3d";
    };
};

class PLOT_ARMOR_H_Bandanna_khk_hs: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_Bandanna_khk_hs";
    displayName = "PLOT ARMOR Bandana (Headset)";
    picture = "\A3\Characters_F\Data\UI\icon_H_Bandanna_khk_hs_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\bandana_khk_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_bandana_hs.p3d";
    };
};

class PLOT_ARMOR_H_Watchcap_blk: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_Watchcap_blk";
    displayName = "PLOT ARMOR Watchcap (Headset)";
    picture = "\A3\Characters_F\Data\UI\icon_H_Watchcap_blk_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\woolhat_v2_blk_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_watchcap.p3d";
    };
};

class PLOT_ARMOR_H_Shemag_olive_hs: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_Shemag_olive_hs";
    displayName = "PLOT ARMOR Shemag (Headset)";
    picture = "\A3\Characters_F\Data\UI\icon_H_Shemag_olive_hs_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\shemag_olive_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Civil\headgear_shemagmask.p3d";
    };
};

class PLOT_ARMOR_H_Cap_brn_SPECOPS: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_Cap_brn_SPECOPS";
    displayName = "PLOT ARMOR Cap (Hex)";
    picture = "\A3\Characters_F\Data\UI\icon_H_Cap_brn_SPECOPS_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\cap_brn_specops_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_cap.p3d";
    };
};

class PLOT_ARMOR_H_Cap_police: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_Cap_police";
    displayName = "PLOT ARMOR Cap (Police)";
    picture = "\A3\Characters_F\Data\UI\icon_H_Cap_Police_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\cap_police_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_cap.p3d";
    };
};

class PLOT_ARMOR_H_Cap_usblack: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_Cap_usblack";
    displayName = "PLOT ARMOR Cap (US Black)";
    picture = "\A3\Characters_F\Data\UI\icon_H_Cap_usblack_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\cap_usblack_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_cap.p3d";
    };
};

class PLOT_ARMOR_H_Cap_tan_specops_US: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_Cap_tan_specops_US";
    displayName = "PLOT ARMOR Cap (Tan US)";
    picture = "\A3\Characters_F\Data\UI\icon_H_Cap_tan_specops_US_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\cap_tan_specops_us_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_cap.p3d";
    };
};

class PLOT_ARMOR_H_Cap_blk_Raven: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_Cap_blk_Raven";
    displayName = "PLOT ARMOR Cap (Digitial)";
    picture = "\A3\Characters_F\Data\UI\icon_H_Cap_blk_Raven_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\cap_blk_raven_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_cap.p3d";
    };
};

class PLOT_ARMOR_H_Booniehat_dgtl: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_Booniehat_dgtl";
    displayName = "PLOT ARMOR Booniehat (Digital)";
    picture = "\A3\Characters_F\Data\UI\icon_H_Booniehat_dgtl_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\booniehat_dgtl_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_booniehat.p3d";
    };
};

class PLOT_ARMOR_H_Booniehat_mcamo: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_Booniehat_mcamo";
    displayName = "PLOT ARMOR Booniehat (MTP)";
    picture = "\A3\Characters_F\Data\UI\icon_H_Booniehat_mcamo_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\booniehat_mcamo_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_booniehat.p3d";
    };
};

class PLOT_ARMOR_H_Bandanna_mcamo: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_Bandanna_mcamo";
    displayName = "PLOT ARMOR Bandana (MTP)";
    picture = "\A3\Characters_F\Data\UI\icon_H_Bandanna_mcamo_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\bandana_mcamo_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_bandana.p3d";
    };
};

class PLOT_ARMOR_H_MilCap_blue: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_MilCap_blue";
    displayName = "PLOT ARMOR Military Cap (Blue)";
    picture = "\A3\Characters_F\Data\UI\icon_H_MilCap_blue_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\camo_blue_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_cap_mil.p3d";
    };
};

class PLOT_ARMOR_H_MilCap_gry: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_MilCap_gry";
    displayName = "PLOT ARMOR Military Cap (Grey)";
    picture = "\A3\Characters_F\Data\UI\icon_H_MilCap_gry_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\camo_gry_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_cap_mil.p3d";
    };
};

class PLOT_ARMOR_H_MilCap_mcamo: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_MilCap_mcamo";
    displayName = "PLOT ARMOR Military Cap (MTP)";
    picture = "\A3\Characters_F\Data\UI\icon_H_MilCap_mcamo_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\camo_mcamo_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_cap_mil.p3d";
    };
};

class PLOT_ARMOR_H_MilCap_dgtl: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_MilCap_dgtl";
    displayName = "PLOT ARMOR Military Cap (Digital)";
    picture = "\A3\Characters_F\Data\UI\icon_H_MilCap_dgtl_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\camo_dgtl_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_cap_mil.p3d";
    };
};

class PLOT_ARMOR_H_MilCap_gen_F: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_MilCap_gen_F";
    displayName = "PLOT ARMOR Military Cap (Gendarmerie)";
    picture = "\A3\Characters_F_Exp\Data\UI\icon_H_MilCap_gen_F_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Data\camo_gen_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_cap_mil.p3d";
    };
};

class PLOT_ARMOR_H_MilCap_ghex_F: H_HelmetB {
    author = "SagJangi";
    _generalMacro = "H_MilCap_ghex_F";
    displayName = "PLOT ARMOR Military Cap (Green Hex)";
    picture = "\A3\Characters_F_Exp\Data\UI\icon_H_MilCap_ghex_F_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\camo_ghex_co.paa"};
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\Common\headgear_cap_mil.p3d";
    };
};

    class PLOT_ARMOR_H_MilCap_tna_F: H_HelmetB {
        author = "SagJangi";
        _generalMacro = "H_MilCap_tna_F";
        displayName = "PLOT ARMOR Military Cap (Tropic)";
        picture = "\A3\Characters_F_Exp\Data\UI\icon_H_MilCap_tna_F_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\camo_tna_co.paa"};
        class ItemInfo: ItemInfo {
            uniformModel = "\A3\Characters_F\Common\headgear_cap_mil.p3d";
        };
    };
};
