//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray, NSString;

@interface NPKProtoStandalonePass : PBCodable <NSCopying>
{
    NSString *_deviceName;
    NSData *_imageData;
    NSString *_localizedDescription;
    NSString *_localizedName;
    NSString *_organizationName;
    int _passType;
    NSString *_passTypeIdentifier;
    NSString *_serialNumber;
    NSMutableArray *_userInfos;
    BOOL _remotePass;
    struct {
        unsigned int passType:1;
        unsigned int remotePass:1;
    } _has;
}

+ (Class)userInfosType;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic) BOOL remotePass; // @synthesize remotePass=_remotePass;
@property(retain, nonatomic) NSMutableArray *userInfos; // @synthesize userInfos=_userInfos;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
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
@property(readonly, nonatomic) BOOL hasDeviceName;
@property(nonatomic) BOOL hasRemotePass;
- (id)userInfosAtIndex:(NSUInteger)arg1;
- (NSUInteger)userInfosCount;
- (void)addUserInfos:(id)arg1;
- (void)clearUserInfos;
@property(readonly, nonatomic) BOOL hasOrganizationName;
@property(readonly, nonatomic) BOOL hasLocalizedDescription;
@property(readonly, nonatomic) BOOL hasLocalizedName;
@property(readonly, nonatomic) BOOL hasImageData;
@property(readonly, nonatomic) BOOL hasPassTypeIdentifier;
@property(readonly, nonatomic) BOOL hasSerialNumber;
- (int)StringAsPassType:(id)arg1;
- (id)passTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPassType;
@property(nonatomic) int passType; // @synthesize passType=_passType;

@end

