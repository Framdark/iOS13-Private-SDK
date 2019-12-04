//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

@interface NTPBWidgetPersonalizationFeatureCTRPair : PBCodable <NSCopying>
{
    float _ctr;
    NSString *_personalizationFeatureId;
    struct {
        unsigned int ctr:1;
    } _has;
}

@property(nonatomic) float ctr; // @synthesize ctr=_ctr;
@property(retain, nonatomic) NSString *personalizationFeatureId; // @synthesize personalizationFeatureId=_personalizationFeatureId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCtr;
@property(readonly, nonatomic) _Bool hasPersonalizationFeatureId;

@end
