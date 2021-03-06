//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NTPBRecordBase;

@interface NTPBTagListRecord : PBCodable <NSCopying>
{
    NTPBRecordBase *_base;
    NSMutableArray *_tagIDs;
}

+ (Class)tagIDsType;
@property(retain, nonatomic) NSMutableArray *tagIDs; // @synthesize tagIDs=_tagIDs;
@property(retain, nonatomic) NTPBRecordBase *base; // @synthesize base=_base;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)tagIDsAtIndex:(NSUInteger)arg1;
- (NSUInteger)tagIDsCount;
- (void)addTagIDs:(id)arg1;
- (void)clearTagIDs;
@property(readonly, nonatomic) BOOL hasBase;
- (void)dealloc;

@end

