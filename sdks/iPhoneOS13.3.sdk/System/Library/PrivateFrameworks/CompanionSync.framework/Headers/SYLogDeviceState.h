//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

__attribute__((visibility("hidden")))
@interface SYLogDeviceState : PBCodable <NSCopying>
{
    NSString *_buildVersion;
    NSString *_deviceClass;
    NSString *_identifier;
    unsigned int _state;
    struct {
        unsigned int state:1;
    } _has;
}

@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain, nonatomic) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
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
@property(nonatomic) BOOL hasState;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(readonly, nonatomic) BOOL hasBuildVersion;
@property(readonly, nonatomic) BOOL hasDeviceClass;
@property(readonly, nonatomic) BOOL hasIdentifier;

@end
