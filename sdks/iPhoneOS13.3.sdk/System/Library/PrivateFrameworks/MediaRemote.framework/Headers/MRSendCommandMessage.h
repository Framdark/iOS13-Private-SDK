//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSDate, NSDictionary, _MRNowPlayingPlayerPathProtobuf;

@interface MRSendCommandMessage : MRProtocolMessage
{
    NSDictionary *_options;
    NSDate *_serializationDate;
}

@property(readonly, nonatomic) NSDate *serializationDate; // @synthesize serializationDate=_serializationDate;
// - (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int appOptions;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property(readonly, nonatomic) NSDictionary *options;
@property(readonly, nonatomic) unsigned int command;
- (NSUInteger)type;
- (id)initWithCommand:(unsigned int)arg1 options:(id)arg2 playerPath:(id)arg3;

@end
