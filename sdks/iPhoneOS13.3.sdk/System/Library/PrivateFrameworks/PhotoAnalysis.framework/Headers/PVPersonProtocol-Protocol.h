//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString;
@protocol PVFaceProtocol, PVFetchResultProtocol;

@protocol PVPersonProtocol <NSObject>
@property(retain, nonatomic) id <PVFaceProtocol> keyFace;
@property(nonatomic) long long manualOrder;
@property(nonatomic) BOOL isVerified;
@property(readonly, nonatomic) long long verifiedType;
@property(readonly, nonatomic) NSString *anonymizedName;
@property(readonly, nonatomic) BOOL hidden;
@property(readonly, nonatomic) BOOL favorite;
@property(readonly, nonatomic) NSUInteger faceCount;
@property(readonly, nonatomic) NSString *localIdentifier;
- (void)pv_addMergeCandidatePersons:(id <PVFetchResultProtocol>)arg1;
- (NSArray *)personLocalIdentifiers;
@end

