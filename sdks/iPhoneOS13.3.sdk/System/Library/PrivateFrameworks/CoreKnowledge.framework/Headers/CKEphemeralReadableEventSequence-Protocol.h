//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CKEvent, NSArray, NSDate, NSString;

@protocol CKEphemeralReadableEventSequence
- (NSArray *)eventsBetween:(NSDate *)arg1 and:(NSDate *)arg2;
- (NSArray *)eventsWithIdentifier:(NSString *)arg1;
- (CKEvent *)first;
- (CKEvent *)last;
@end
