// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Item.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/MapItemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MapItem : public Item {
#include "Extra/MapItemAPI.hpp"
public:
    virtual ~MapItem();
    virtual void tearDown();
    virtual int getMaxUseDuration(class ItemStack const*);
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void executeEvent(class ItemStackBase&, std::string const&, class RenderParams&);
    virtual void unk_vfn_7();
    virtual bool isArmor();
    virtual bool isBlockPlanterItem();
    virtual void unk_vfn_10();
    virtual void unk_vfn_12();
    virtual bool isDyeable();
    virtual bool isDye();
    virtual int /*enum ItemColor*/ getItemColor();
    virtual bool isFertilizer();
    virtual void unk_vfn_18();
    virtual bool isThrowable();
    virtual bool isUseable();
    virtual class FuelItemComponent* getFuel();
    virtual void unk_vfn_35();
    virtual bool canDestroySpecial(class Block const&);
    virtual int getLevelDataForAuxValue(int);
    virtual short getMaxDamage();
    virtual int getAttackDamage();
    virtual bool isGlint(class ItemStackBase const&);
    virtual void unk_vfn_44();
    virtual void unk_vfn_45();
    virtual void unk_vfn_46();
    virtual bool isWearableThroughLootTable(class CompoundTag const*);
    virtual bool canDestroyInCreative();
    virtual bool isDestructive(int);
    virtual bool isLiquidClipItem(int);
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&);
    virtual bool requiresInteract();
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool);
    virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&);
    virtual int getEnchantSlot();
    virtual int getEnchantValue();
    virtual int getArmorValue();
    virtual void unk_vfn_58();
    virtual bool isValidAuxValue(int);
    virtual void unk_vfn_61();
    virtual void unk_vfn_62();
    virtual void unk_vfn_63();
    virtual void unk_vfn_64();
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&);
    virtual bool hasCustomColor(class CompoundTag const*);
    virtual void unk_vfn_67();
    virtual void clearColor(class CompoundTag*);
    virtual void unk_vfn_69();
    virtual void unk_vfn_70();
    virtual void unk_vfn_71();
    virtual void unk_vfn_72();
    virtual void unk_vfn_74();
    virtual void unk_vfn_75();
    virtual void unk_vfn_77();
    virtual float getDestroySpeed(class ItemStackBase const&, class Block const&);
    virtual void hitActor(class ItemStack&, class Actor&, class Mob&);
    virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&);
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*);
    virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*);
    virtual void unk_vfn_88();
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*);
    virtual unsigned char getMaxStackSize(class ItemDescriptor const&);
    virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool);
    virtual void refreshedInContainer(class ItemStackBase const&, class Level&);
    virtual void fixupCommon(class ItemStackBase&, class Level&);
    virtual void unk_vfn_103();
    virtual void unk_vfn_104();
    virtual bool validFishInteraction(int);
    virtual bool isSameItem(class ItemStackBase const&, class ItemStackBase const&);
    virtual std::string getInteractText(class Player const&);
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool);
    virtual struct TextureUVCoordinateSet const& getIcon(class ItemStackBase const&, int, bool);
    virtual int getIconYOffset();
    virtual class Item& setIcon(std::string const&, int);
    virtual bool canBeCharged();
    virtual void playSoundIncrementally(class ItemStack const&, class Mob&);
    virtual void unk_vfn_119();
    virtual std::string getAuxValuesDescription();
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&);
    virtual std::unique_ptr<class Packet> getUpdatePacket(class ItemStack const&, class Level&, class Actor&);

public:
    MCAPI void blockTick(class ItemStack&, class BlockSource&, class BlockPos const&) const;
    MCAPI void update(class Level&, class Actor&, class MapItemSavedData&) const;

    MCAPI static std::string const TAG_MAP_INIT;
    MCAPI static std::string const TAG_MAP_NAME_INDEX;
    MCAPI static std::string const TAG_MAP_PLAYER_DISPLAY;
    MCAPI static std::string const TAG_MAP_SCALE;
    MCAPI static std::string const TAG_MAP_SCALING;
    MCAPI static std::string const TAG_MAP_UUID;
    MCAPI static bool doesDisplayPlayerMarkers(class ItemStack const&);
    MCAPI static struct ActorUniqueID getMapId(class CompoundTag const*);
    MCAPI static void renderBiomePreviewMap(class Dimension&, class MapItemSavedData&);
    MCAPI static void sampleMapData(class BlockSource&, int, class BlockPos const&, class BlockPos const&, int, int, std::vector<struct MapSample>*, class MapItemSavedData*, class MapItemTrackedActor*);
    MCAPI static void serializeMapData(std::vector<struct MapSample> const&, std::string&);
    MCAPI static void setItemInstanceInfo(class ItemInstance&, class MapItemSavedData&);
    MCAPI static void setItemInstanceInfo(class ItemStack&, class MapItemSavedData&);
    MCAPI static void setMapNameIndex(class ItemStack&, int);

private:
    MCAPI void _makeNewExplorationMap(class ItemStack&, class Level&, class Actor*, std::string&) const;

    MCAPI static void _scheduleMapChunkRendering(class Dimension&, class MapItemSavedData const&, struct MapItemSavedData::ChunkBounds, class std::shared_ptr<bool>);
};