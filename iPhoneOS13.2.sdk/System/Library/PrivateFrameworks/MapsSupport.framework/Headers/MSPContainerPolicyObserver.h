//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPContainerObserver-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface MSPContainerPolicyObserver : NSObject <MSPContainerObserver>
{
    unsigned long long _lastKnownItemCount;
    unsigned long long _minimumDeletesForDataLoss;
    double _minimumDeleteRatioForDataLoss;
    NSObject<OS_dispatch_queue> *_observerQueue;
    _Bool _keepMetrics;
    unsigned long long _dataLossPolicyOffenses;
}

@property(nonatomic) unsigned long long dataLossPolicyOffenses; // @synthesize dataLossPolicyOffenses=_dataLossPolicyOffenses;
@property(nonatomic) _Bool keepMetrics; // @synthesize keepMetrics=_keepMetrics;
- (void)containerWillEraseContents:(id)arg1;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
- (id)observationQueueForContainer:(id)arg1;
- (void)setContainerItemCount:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
