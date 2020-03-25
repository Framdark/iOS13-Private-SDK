//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoverSheet/DNDStateUpdateListener-Protocol.h>

@class BSTimer, DNDStateService, NSHashTable;

@interface CSDNDBedtimeController : NSObject <DNDStateUpdateListener>
{
    DNDStateService *_stateService;
    NSHashTable *_observers;
    BSTimer *_greetingGracePeriodTimer;
    BOOL _deactivated;
    BOOL _active;
    BOOL _shouldShowGreeting;
}

@property(nonatomic) BOOL shouldShowGreeting; // @synthesize shouldShowGreeting=_shouldShowGreeting;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
// - (void).cxx_destruct;
- (void)_cleanUpGreetingGracePeriodTimer;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithStateService:(id)arg1;

@end
