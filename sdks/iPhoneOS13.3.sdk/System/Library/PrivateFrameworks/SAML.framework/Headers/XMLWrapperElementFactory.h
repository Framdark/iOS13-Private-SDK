//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface XMLWrapperElementFactory : NSObject
{
}

+ (NSUInteger)elementTypeByTagName:(id)arg1;
+ (Class)elementClassByTagName:(id)arg1;
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2;
+ (void)initialize;
+ (id)sharedInstance;
- (Class)classForXMLNode:(struct _xmlNode )arg1 error:(id )arg2;

@end
