//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol ImageBrowseDelegate <NSObject>

@optional
- (void)didSelectImage:(UIImage *)arg1 Data:(NSData *)arg2 Finish:(_Bool)arg3 fromImagePicker:(UINavigationController *)arg4;
- (void)didSelectImage:(UIImage *)arg1 Data:(NSData *)arg2 fromImagePicker:(UINavigationController *)arg3;
- (void)didSelectImage:(UIImage *)arg1 fromImagePicker:(UINavigationController *)arg2;
- (void)downloadFailInImageBrowse;
@end
