//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebResourcePrivate : NSObject
{
    struct RefPtr<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource>> coreResource;
}

+ (void)initialize;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoreResource:(Ref_23906fc6 )arg1;
- (id)init;

@end

