//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFTableItem.h>

@class NSMapTable;

@interface WFCustomTableItem : WFTableItem
{
    id /* CDUnknownBlockType */ _configurationBlock;
    NSMapTable *_representedObjectChangeTargetSelectorTable;
}

@property(readonly, nonatomic) NSMapTable *representedObjectChangeTargetSelectorTable; // @synthesize representedObjectChangeTargetSelectorTable=_representedObjectChangeTargetSelectorTable;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ configurationBlock; // @synthesize configurationBlock=_configurationBlock;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (void)addRepresentedObjectChangeObserver:(id)arg1 action:(SEL)arg2;
- (void)setRepresentedObject:(id)arg1 updatingCell:(BOOL)arg2;
@property(retain, nonatomic) id representedObject;
- (void)configureCell:(id)arg1;
- (id)initWithCellClass:(Class)arg1 style:(long long)arg2 representedObject:(id)arg3 configurationBlock:(id /* CDUnknownBlockType */)arg4;

@end

