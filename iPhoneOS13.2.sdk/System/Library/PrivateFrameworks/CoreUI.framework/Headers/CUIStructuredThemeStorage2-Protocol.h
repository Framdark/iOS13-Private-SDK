//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CUICommonAssetStorage, CUINamedImageDescription, CUINamedRenditionInfo, NSArray, NSDictionary, NSString;

@protocol CUIStructuredThemeStorage2
- (unsigned short)localizationIdentifierForName:(NSString *)arg1;
- (NSDictionary *)localizations;
- (NSDictionary *)appearances;
- (NSString *)nameForAppearanceIdentifier:(unsigned short)arg1;
- (unsigned short)appearanceIdentifierForName:(NSString *)arg1;
- (NSArray *)imagesWithName:(NSString *)arg1;
- (NSArray *)allImageNames;
- (const struct _renditionkeytoken *)renditionKeyForName:(NSString *)arg1;
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;

@optional
- (CUINamedRenditionInfo *)renditionInfoForIdentifier:(unsigned short)arg1;
- (CUICommonAssetStorage *)themeStore;
- (NSString *)renditionNameForKeyList:(struct _renditionkeytoken *)arg1;
- (void)removeImageNamed:(NSString *)arg1 withDescription:(CUINamedImageDescription *)arg2;
- (void)insertCGImage:(struct CGImage *)arg1 withName:(NSString *)arg2 andDescription:(CUINamedImageDescription *)arg3;
@end
