//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <WorkflowKit/WFHomeManagerEventObserver-Protocol.h>

@class HFTriggerActionSetsBuilder;

@interface WFHomeAccessoryAction : WFAction <WFHomeManagerEventObserver>
{
}

+ (id)homeAccessoryActionWithHome:(id)arg1;
+ (id)homeAccessoryActionWithTriggerActionSetsBuilder:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)homeName;
- (id)localizedAttribution;
- (id)localizedDescriptionSummary;
- (id)localizedName;
- (void)runAsynchronouslyWithInput:(id)arg1;
@property(readonly, nonatomic) HFTriggerActionSetsBuilder *triggerActionSetsBuilder;
- (void)dealloc;
- (void)initializeParameters;

@end

