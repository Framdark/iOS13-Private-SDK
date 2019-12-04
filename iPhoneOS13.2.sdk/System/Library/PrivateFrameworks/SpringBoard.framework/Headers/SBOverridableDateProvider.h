//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBDateTimeOverrideObserver-Protocol.h>
#import <SpringBoard/SBFDateProviding-Protocol.h>

@class NSDate, NSMutableDictionary, NSString, SBDateTimeController;
@protocol SBFDateProviding;

@interface SBOverridableDateProvider : NSObject <SBDateTimeOverrideObserver, SBFDateProviding>
{
    SBDateTimeController *_dateTimeController;
    id <SBFDateProviding> _underlyingProvider;
    NSMutableDictionary *_minuteHandlers;
    unsigned long long _nextToken;
    id _underlyingToken;
    NSDate *_overrideDate;
}

- (void)_fireHandlersForDate:(id)arg1;
- (void)_updateUnderlyingProvider;
- (void)_updateForOverrides;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (void)removeMinuteUpdateHandler:(id)arg1;
- (id)observeMinuteUpdatesWithHandler:(id /* block */)arg1;
- (id)date;
- (id)initWithDateProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
