//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class REClassLoader;

@interface RERelevanceProviderManagerLoader : NSObject
{
    REClassLoader *_loader;
}

+ (id)aggregateRelevanceProviderManagerLoaderWithrelevanceProviderManagerLoaders:(id)arg1;
+ (id)relevanceProviderManagerLoaderWithBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)relevanceProviderManagerLoaderWithDirectories:(id)arg1 relevanceProviderManagerKey:(id)arg2;
+ (id)relevanceProviderManagerLoaderWithDirectories:(id)arg1;
+ (id)disabledRelevanceProviderManagerLoader;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)enumerateBundleConfigurations:(id /* CDUnknownBlockType */)arg1;
- (void)enumerationDataSourceClassesWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)prewarm;

@end

