//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, PBDataReader;

@interface GEORPWatchAuxiliaryControl : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_hardwareIdentifier;
    NSString *_osBuild;
    NSString *_osVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_hardwareIdentifier:1;
        unsigned int read_osBuild:1;
        unsigned int read_osVersion:1;
        unsigned int wrote_hardwareIdentifier:1;
        unsigned int wrote_osBuild:1;
        unsigned int wrote_osVersion:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *osBuild;
@property(readonly, nonatomic) BOOL hasOsBuild;
- (void)_readOsBuild;
@property(retain, nonatomic) NSString *osVersion;
@property(readonly, nonatomic) BOOL hasOsVersion;
- (void)_readOsVersion;
@property(retain, nonatomic) NSString *hardwareIdentifier;
@property(readonly, nonatomic) BOOL hasHardwareIdentifier;
- (void)_readHardwareIdentifier;
- (id)initWithData:(id)arg1;
- (id)init;

@end
