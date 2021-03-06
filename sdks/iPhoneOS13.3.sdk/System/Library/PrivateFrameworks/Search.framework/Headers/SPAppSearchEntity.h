//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/SPSearchEntity.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SPAppSearchEntity : SPSearchEntity
{
    NSString *_appName;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSString *appName; // @synthesize appName=_appName;
// - (void).cxx_destruct;
- (id)queryString;
- (void)appendToQuery:(id)arg1 key:(id)arg2 value:(id)arg3 additions:(id)arg4;
- (id)tokenText;
- (BOOL)isScopedAppSearch;
- (BOOL)isPeopleSearch;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 appName:(id)arg2;

@end

