//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUTriggerConditionEditorExpandingSectionModule.h>

@class HFItem, HFTransformItem;

@interface HUTriggerTimeConditionEditorSectionModule : HUTriggerConditionEditorExpandingSectionModule
{
    HFItem *_anyTimeOptionItem;
    HFTransformItem *_onlyDayOptionItem;
    HFTransformItem *_onlyNightOptionItem;
    HFTransformItem *_specificTimesOptionItem;
    HFTransformItem *_customOptionItem;
}

@property(retain, nonatomic) HFTransformItem *customOptionItem; // @synthesize customOptionItem=_customOptionItem;
@property(retain, nonatomic) HFTransformItem *specificTimesOptionItem; // @synthesize specificTimesOptionItem=_specificTimesOptionItem;
@property(retain, nonatomic) HFTransformItem *onlyNightOptionItem; // @synthesize onlyNightOptionItem=_onlyNightOptionItem;
@property(retain, nonatomic) HFTransformItem *onlyDayOptionItem; // @synthesize onlyDayOptionItem=_onlyDayOptionItem;
@property(retain, nonatomic) HFItem *anyTimeOptionItem; // @synthesize anyTimeOptionItem=_anyTimeOptionItem;
// - (void).cxx_destruct;
- (id)_createConditionItemForType:(NSUInteger)arg1;
- (id)_conditionItemForType:(NSUInteger)arg1;
- (BOOL)doesOptionItemRequireInitialUserConfiguration:(id)arg1;
- (id)buildConditionOptionItems;
- (BOOL)conditionIsDisabled;
- (id)noConditionSummaryTitle;
- (id)conditionTitle;
- (id)preferredConditionFromConditions:(id)arg1;
- (id)selectOptionItemForCondition:(id)arg1;
- (id)conditionForOptionItem:(id)arg1;

@end

