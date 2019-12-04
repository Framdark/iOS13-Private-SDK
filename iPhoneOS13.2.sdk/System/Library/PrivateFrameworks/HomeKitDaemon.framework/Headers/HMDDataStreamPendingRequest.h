//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface HMDDataStreamPendingRequest : NSObject
{
    NSNumber *_identifier;
    NSString *_topic;
    NSString *_protocol;
    id /* block */ _callback;
    NSDictionary *_payload;
}

@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) id /* block */ callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(readonly, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;
- (_Bool)matchesResponseHeader:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 protocol:(id)arg2 topic:(id)arg3 payload:(id)arg4 callback:(id /* block */)arg5;

@end
