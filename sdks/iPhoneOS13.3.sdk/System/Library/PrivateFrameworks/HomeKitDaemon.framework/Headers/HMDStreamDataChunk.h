//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSNumber;

@interface HMDStreamDataChunk : HMFObject
{
    BOOL _isLast;
    NSNumber *_sequenceNumber;
    NSData *_data;
}

@property(readonly, copy) NSData *data; // @synthesize data=_data;
@property(readonly) BOOL isLast; // @synthesize isLast=_isLast;
@property(readonly, copy) NSNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithStreamDataDictionary:(id)arg1;
- (id)initWithSequenceNumber:(id)arg1 data:(id)arg2 isLast:(BOOL)arg3;

@end

