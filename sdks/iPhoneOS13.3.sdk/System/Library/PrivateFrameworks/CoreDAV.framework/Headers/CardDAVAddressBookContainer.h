//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVContainer.h>

@class NSString, NSURL;

@interface CardDAVAddressBookContainer : CoreDAVContainer
{
    NSString *_maxResourceSize;
    NSString *_maxImageSize;
    NSURL *_meCardURL;
    BOOL _isGuardianRestricted;
}

+ (id)copyPropertyMappingsForParser;
@property(nonatomic) BOOL isGuardianRestricted; // @synthesize isGuardianRestricted=_isGuardianRestricted;
@property(retain, nonatomic) NSURL *meCardURL; // @synthesize meCardURL=_meCardURL;
@property(retain, nonatomic) NSString *maxImageSize; // @synthesize maxImageSize=_maxImageSize;
@property(retain, nonatomic) NSString *maxResourceSize; // @synthesize maxResourceSize=_maxResourceSize;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isSharedAddressBook;
@property(readonly, nonatomic) BOOL isSearchAddressBook;
@property(readonly, nonatomic) BOOL isAddressBook;
- (void)applyParsedProperties:(id)arg1;
- (id)description;

@end
