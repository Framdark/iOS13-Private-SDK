//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFMutexLock, NFStateMachineState, NSMutableDictionary;

@interface NFStateMachine : NSObject
{
    NSUInteger _status;
    NFStateMachineState *_state;
    id _owner;
    NSMutableDictionary *_states;
    NSMutableDictionary *_events;
    NFMutexLock *_lock;
    long long _statusToken;
}

@property(nonatomic) long long statusToken; // @synthesize statusToken=_statusToken;
@property(retain, nonatomic) NFMutexLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *events; // @synthesize events=_events;
@property(retain, nonatomic) NSMutableDictionary *states; // @synthesize states=_states;
@property(nonatomic) __weak id owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NFStateMachineState *state; // @synthesize state=_state;
@property(nonatomic) NSUInteger status; // @synthesize status=_status;
// - (void).cxx_destruct;
- (id)fireEventWithName:(id)arg1 withContext:(id)arg2;
- (void)addEvent:(id)arg1;
- (void)addState:(id)arg1;
- (void)deactivateIfNeeded;
- (void)deactivate;
- (void)activateIfNeeded;
- (void)activate;
- (id)debugDescription;
- (id)description;
- (id)initWithState:(id)arg1 withOwner:(id)arg2;

@end

