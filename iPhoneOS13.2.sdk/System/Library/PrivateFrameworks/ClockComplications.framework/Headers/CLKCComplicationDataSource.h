//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKCComplication, CLKDevice;
@protocol CLKCComplicationDataSourceDelegate;

@interface CLKCComplicationDataSource : NSObject
{
    CLKCComplication *_complication;
    long long _family;
    CLKDevice *_device;
    id <CLKCComplicationDataSourceDelegate> _delegate;
}

+ (_Bool)wantsToSkipPauseWhenEnteringTritium;
+ (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (_Bool)hasSensitiveUI;
@property(nonatomic) __weak id <CLKCComplicationDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) long long family; // @synthesize family=_family;
@property(readonly, nonatomic) CLKCComplication *complication; // @synthesize complication=_complication;
- (void)getDesiredUpdateIntervalWithHandler:(id /* block */)arg1;
- (void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)arg1;
- (void)getTimelineEndDateWithHandler:(id /* block */)arg1;
- (void)getTimelineStartDateWithHandler:(id /* block */)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)arg1;
- (id)alwaysOnTemplate;
- (id)privacyTemplate;
- (id)lockedTemplate;
- (id)currentSwitcherTemplate;
- (id)complicationApplicationIdentifier;
- (_Bool)alwaysShowIdealizedTemplateInSwitcher;
- (void)didTouchUpInsideView:(id)arg1;
- (void)didTouchDownInView:(id)arg1;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)resumeAnimations;
- (void)pauseAnimations;
- (void)resume;
- (void)pause;
- (void)becomeInactive;
- (void)becomeActive;
@property(readonly, nonatomic) _Bool supportsTapAction;
@property(readonly, nonatomic) unsigned long long timelineAnimationBehavior;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;

@end
