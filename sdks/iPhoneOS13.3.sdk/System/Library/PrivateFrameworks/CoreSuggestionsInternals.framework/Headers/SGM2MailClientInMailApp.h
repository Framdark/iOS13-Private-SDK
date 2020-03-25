//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface SGM2MailClientInMailApp : PBCodable <NSCopying>
{
    NSString *_key;
    int _service;
    BOOL _isSynced;
    struct {
        unsigned int service:1;
        unsigned int isSynced:1;
    } _has;
}

@property(nonatomic) BOOL isSynced; // @synthesize isSynced=_isSynced;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsService:(id)arg1;
- (id)serviceAsString:(int)arg1;
@property(nonatomic) BOOL hasService;
@property(nonatomic) int service; // @synthesize service=_service;
@property(nonatomic) BOOL hasIsSynced;
@property(readonly, nonatomic) BOOL hasKey;

@end
