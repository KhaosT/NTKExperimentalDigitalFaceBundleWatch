//
//  NTKExperimentalDigitalFaceBundle.m
//  NTKExperimentalDigitalFaceBundle
//
//  Created by Khaos Tian on 1/26/22.
//

#import <objc/runtime.h>
#import "NTKExperimentalDigitalFaceBundle.h"
#import "NTKExperimentalDigitalFace.h"
#import "NTKExperimentalDigitalFaceView.h"

@implementation NTKExperimentalDigitalFaceBundle

- (Class)faceClass {
    return [NTKExperimentalDigitalFace class];
}

- (Class)faceViewClass {
    return [NTKExperimentalDigitalFaceView class];
}

- (NSObject *)defaultFaceForDevice:(NSObject *)device {
    return [NTKExperimentalDigitalFace bundledFaceWithIdentifier:[NTKExperimentalDigitalFaceBundle identifier]
                                                       forDevice:device
                                               initCustomization:0];
}

- (NSArray<NSObject *> *)galleryFacesForDevice:(NSObject *)device {
    NSObject *face = [NTKExperimentalDigitalFace bundledFaceWithIdentifier:[NTKExperimentalDigitalFaceBundle identifier]
                                                                 forDevice:device
                                                         initCustomization:0];
    
    return @[face];
}

- (NSString *)galleryTitle {
    return @"Experimental Digital";
}

@end
