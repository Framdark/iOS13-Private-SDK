//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSCurrentServerTimePair;
@protocol IDSCurrentServerTimeProvider;

@interface IDSCurrentServerTime : NSObject
{
    IDSCurrentServerTimePair *_timePair;
    id <IDSCurrentServerTimeProvider> _serverTimeProvider;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <IDSCurrentServerTimeProvider> serverTimeProvider; // @synthesize serverTimeProvider=_serverTimeProvider;
@property(retain) IDSCurrentServerTimePair *timePair; // @synthesize timePair=_timePair;
- (void)_refreshServerTime;
- (void)_storeInitialServerTime;
- (double)_refreshTimeInterval;
- (id)currentServerTimeDate;
- (double)currentServerTimeInterval;
- (id)initWithServerTimeProvider:(id)arg1;

@end
