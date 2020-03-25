//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, _MRDeviceInfoMessageProtobuf;

@interface _MROriginProtobuf : PBCodable <NSCopying>
{
    _MRDeviceInfoMessageProtobuf *_deviceInfoDeprecated;
    NSString *_displayName;
    int _identifier;
    int _type;
    struct {
        unsigned int identifier:1;
        unsigned int type:1;
    } _has;
}

+ (id)localOrigin;
@property(retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfoDeprecated; // @synthesize deviceInfoDeprecated=_deviceInfoDeprecated;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
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
@property(readonly, nonatomic) BOOL hasDeviceInfoDeprecated;
@property(nonatomic) BOOL hasIdentifier;
@property(readonly, nonatomic) BOOL hasDisplayName;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL isLocal;

@end
