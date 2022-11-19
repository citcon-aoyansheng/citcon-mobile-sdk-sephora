
1. Install the aar file to your local maven repository

		cd android_mobile_sdk
		
		mvn install:install-file -Dfile=cpay-4.23.00.aar -DpomFile=cpay-4.23.00.pom
		mvn install:install-file -Dfile=mobile-2.5.6.aar -DpomFile=mobile-2.5.6.pom
		mvn install:install-file -Dfile=upi-1.0.5.aar -DpomFile=upi-1.0.5.pom


2. Add `mavenLocal()` configuration into your target app, make sure it’s the first repository as below

		repositories {
	        mavenLocal()
		
	        google()
	        mavenCentral()
        }


3. Add implementation into the dependencies element of app `build.gradle`

	
		implementation 'com.citcon.sdk:cpay:4.23.00'
		
		
		
