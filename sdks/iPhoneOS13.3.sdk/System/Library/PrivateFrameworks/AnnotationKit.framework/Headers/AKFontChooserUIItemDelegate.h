//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/AKFontChooserUserInterfaceItem-Protocol.h>
#import <AnnotationKit/AKUserInterfaceItem-Protocol.h>

@class AKTextAttributesViewController;

@interface AKFontChooserUIItemDelegate : NSObject <AKUserInterfaceItem, AKFontChooserUserInterfaceItem>
{
    AKTextAttributesViewController *_parentController;
}

@property __weak AKTextAttributesViewController *parentController; // @synthesize parentController=_parentController;
// - (void).cxx_destruct;
- (void)syncFontsToUI:(id)arg1;
- (id)convertFont:(id)arg1;
- (long long)tag;

@end

