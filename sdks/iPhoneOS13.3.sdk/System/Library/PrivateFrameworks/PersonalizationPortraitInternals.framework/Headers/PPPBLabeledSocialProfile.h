//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface PPPBLabeledSocialProfile : PBCodable <NSCopying>
{
    NSString *_label;
    NSString *_service;
    NSString *_urlString;
    NSString *_userIdentifier;
    NSString *_username;
}

@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
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
@property(readonly, nonatomic) BOOL hasService;
@property(readonly, nonatomic) BOOL hasUserIdentifier;
@property(readonly, nonatomic) BOOL hasUsername;
@property(readonly, nonatomic) BOOL hasUrlString;
@property(readonly, nonatomic) BOOL hasLabel;

@end

