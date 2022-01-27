//
//  NTKExperimentalDigitalFaceBundle.h
//  NTKExperimentalDigitalFaceBundle
//
//  Created by Khaos Tian on 1/26/22.
//

#import <Foundation/Foundation.h>
#import "NanoTimeKit.h"

NS_ASSUME_NONNULL_BEGIN

@interface NTKExperimentalDigitalFaceBundle : NTKFaceBundle

- (Class)faceClass;
- (Class)faceViewClass;
- (NSObject *)defaultFaceForDevice:(NSObject *)device;
- (NSArray<NSObject *> *)galleryFacesForDevice:(NSObject *)arg2;
- (NSString *)galleryTitle;

@end

NS_ASSUME_NONNULL_END
