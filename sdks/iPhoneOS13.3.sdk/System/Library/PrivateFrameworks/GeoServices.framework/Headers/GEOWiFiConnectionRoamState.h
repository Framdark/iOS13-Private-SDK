//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface GEOWiFiConnectionRoamState : PBCodable <NSCopying>
{
    int _lateRoamMaxRSSI;
    int _lateRoamMinRSSI;
    struct {
        unsigned int has_lateRoamMaxRSSI:1;
        unsigned int has_lateRoamMinRSSI:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(nonatomic) BOOL hasLateRoamMaxRSSI;
@property(nonatomic) int lateRoamMaxRSSI;
@property(nonatomic) BOOL hasLateRoamMinRSSI;
@property(nonatomic) int lateRoamMinRSSI;

@end

