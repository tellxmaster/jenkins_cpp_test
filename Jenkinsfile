pipeline {
    agent { label 'linux' }
    stages {
        stage('Build') {
            steps {
                script{
                    sh 'g++ main.cpp -o main'
                    sh 'echo "3\n1\n2\n0" | ./main > output.txt'
                    sh 'cat output.txt'
                    sh 'diff expected_output.txt output.txt'
                }
            }
        }
    }
    post{
        always{
            sh 'Programa Ejecutado'
        }
        success{
            sh 'Fase Success'
            sh 'cat output.txt'
        }
        failure{
            sh 'Prueba fallida'
        }
    }
}
