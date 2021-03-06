//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOFareOptions, PBDataReader, PBUnknownFields;

@interface GEOTransitOptions : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _avoidedModes;
    GEOFareOptions *_fareOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _prioritization;
    int _routingBehavior;
    struct {
        unsigned int has_prioritization:1;
        unsigned int has_routingBehavior:1;
        unsigned int read_unknownFields:1;
        unsigned int read_avoidedModes:1;
        unsigned int read_fareOptions:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_avoidedModes:1;
        unsigned int wrote_fareOptions:1;
        unsigned int wrote_prioritization:1;
        unsigned int wrote_routingBehavior:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
- (int)StringAsRoutingBehavior:(id)arg1;
- (id)routingBehaviorAsString:(int)arg1;
@property(nonatomic) BOOL hasRoutingBehavior;
@property(nonatomic) int routingBehavior;
@property(retain, nonatomic) GEOFareOptions *fareOptions;
@property(readonly, nonatomic) BOOL hasFareOptions;
- (void)_readFareOptions;
- (int)StringAsPrioritization:(id)arg1;
- (id)prioritizationAsString:(int)arg1;
@property(nonatomic) BOOL hasPrioritization;
@property(nonatomic) int prioritization;
- (int)StringAsAvoidedModes:(id)arg1;
- (id)avoidedModesAsString:(int)arg1;
- (void)setAvoidedModes:(int )arg1 count:(NSUInteger)arg2;
- (int)avoidedModeAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsAvoidedMode:(int)arg1;
- (void)addAvoidedMode:(int)arg1;
- (void)clearAvoidedModes;
@property(readonly, nonatomic) int avoidedModes;
@property(readonly, nonatomic) NSUInteger avoidedModesCount;
- (void)_readAvoidedModes;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

