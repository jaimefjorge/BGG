//
//  StorageHelper.m
//  Vigia20
//
//  Created by João Caxaria on 2/22/11.
//  Copyright 2011 Imaginary Factory. All rights reserved.
//

#import "StorageHelper.h"


@implementation StorageHelper

+ (NSString*) baseStorageDirectory
{
	NSString* basePath = [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0] stringByAppendingPathComponent:@"baseStorage"];
	
	if(![[NSFileManager defaultManager] fileExistsAtPath:basePath isDirectory:NULL])
		[[NSFileManager defaultManager] createDirectoryAtPath:basePath withIntermediateDirectories:YES attributes:nil error:nil];
	return basePath;
}

+(bool) fileExists:(NSString*) name
{
    return [[NSFileManager defaultManager] fileExistsAtPath:name];
}

+ (NSString*) createDirectory:(NSString*) name
{
    NSString* basePath = [[StorageHelper baseStorageDirectory] stringByAppendingPathComponent:name];
	if(![[NSFileManager defaultManager] fileExistsAtPath:basePath isDirectory:NULL])
		[[NSFileManager defaultManager] createDirectoryAtPath:basePath withIntermediateDirectories:YES attributes:nil error:nil];
	return basePath;
}

+ (NSString*) filenameInStorage:(NSString*) filename
{
	return [[StorageHelper baseStorageDirectory] stringByAppendingPathComponent:filename];
}

+ (NSString*) filenameComponent:(NSString*) url;
{
	NSArray* components = [url componentsSeparatedByString: @"/"];
	return [components lastObject];
}
@end
