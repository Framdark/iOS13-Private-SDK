//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRadioContentReference.h>


@class NSNumber, NSString;

@interface ICRadioLibraryArtistContentReference : ICRadioContentReference <NSCopying, NSSecureCoding>
{
    NSString *_artistName;
    NSNumber *_representativeCloudIdentifier;
    NSNumber *_storeIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSNumber *representativeCloudIdentifier; // @synthesize representativeCloudIdentifier=_representativeCloudIdentifier;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)matchDictionary;
- (long long)contentType;

@end
