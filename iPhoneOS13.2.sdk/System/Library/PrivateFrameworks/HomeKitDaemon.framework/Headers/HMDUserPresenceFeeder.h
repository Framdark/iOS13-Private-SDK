//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDHomePresenceBase.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDBackgroundTaskAgentTimer, HMDUserPresenceFeed, HMDUserPresenceFeedSession, NSString;

@interface HMDUserPresenceFeeder : HMDHomePresenceBase <HMFLogging>
{
    unsigned long long _presenceRegionStatus;
    HMDBackgroundTaskAgentTimer *_btaUpdateTimer;
    HMDUserPresenceFeedSession *_currentFeedSession;
    HMDUserPresenceFeed *_lastSentFeed;
}

+ (id)logCategory;
+ (void)submitPresenceReportMetricWithPresenceAuth:(id)arg1 presenceCompute:(id)arg2 reason:(id)arg3 error:(id)arg4;
@property(retain, nonatomic) HMDUserPresenceFeed *lastSentFeed; // @synthesize lastSentFeed=_lastSentFeed;
@property(retain, nonatomic) HMDUserPresenceFeedSession *currentFeedSession; // @synthesize currentFeedSession=_currentFeedSession;
@property(readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaUpdateTimer; // @synthesize btaUpdateTimer=_btaUpdateTimer;
@property(nonatomic) unsigned long long presenceRegionStatus; // @synthesize presenceRegionStatus=_presenceRegionStatus;
- (void)notifyDidLeaveHomeRegion;
- (void)notifyDidEnterHomeRegion;
- (void)notifyDidLeaveHome;
- (void)notifyDidArriveHome;
- (void)homeDataProcessed;
- (void)presenceAuthChanged;
- (void)presenceAuthStatusChangedForUser:(id)arg1 presenceAuthStatus:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
